/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 00:09:13 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/17 14:56:43 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] > 96 && str[i] < 123))
			str[i] = str[i] - 32;
		else
		{
			if (!is_alpha(str[i - 1]) && (str[i] > 96 && str[i] < 123))
				str[i] = str[i] - 32;
			else if (is_alpha(str[i - 1]) && (str[i] > 64 && str[i] < 91))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
