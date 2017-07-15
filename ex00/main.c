/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amordret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:32:14 by amordret          #+#    #+#             */
/*   Updated: 2017/07/16 01:08:39 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_error(void);

void	ft_data_entry(char **av, int array[][9]);

int		solve(int i, int j, int arr[][9]);

int		valid(int i, int j, int value, int arr[][9]);

void	printoutput(int array[][9]);

int		main(int ac, char *av[])
{
	int	array[9][9];
	if (ac == 1)
		return (0);
	ft_data_entry(av, array);
	//printoutput(array);
	solve(0, 0, array);
	printoutput(array);
	return(0);
}
