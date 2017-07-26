/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:01:21 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/26 23:03:00 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	insert(ptr *head, char c)
{
	while (*head)
		head = &(*head)->next;
	*head = malloc(sizeof(**head));
	(*head)->val = c;
	(*head)->next = NULL;
}

void	fill_str(ptr head, char *str)
{
	int i;

	i = 0;
	while (head)
	{
		str[i] = head->val;
		head = head->next;
		i++;
	}
	str[i] = '\0';
}

void	freelist(ptr *head)
{
	ptr tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
