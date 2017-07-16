/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amordret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:32:14 by amordret          #+#    #+#             */
/*   Updated: 2017/07/16 11:16:59 by amordret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_error(void);

int		ft_data_entry(char **av, int array[][9]);

int		ft_check_data_entry(int array[][9]);

int		solve(int i, int j, int arr[][9]);

int		valid(int i, int j, int value, int arr[][9]);

void	printoutput(int array[][9]);

int		main(int ac, char *av[])
{
	int	array[9][9];

	if (ac != 10)
		return (ft_error());
	if (ft_data_entry(av, array) == 99)
		return (0);
	if (ft_check_data_entry(array) == 99)
		return (0);
	solve(0, 0, array);
	printoutput(array);
	return (0);
}
