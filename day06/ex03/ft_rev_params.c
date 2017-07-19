/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 20:44:10 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/16 20:47:02 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int n;

	i = argc - 1;
	while (i > 0)
	{
		n = 0;
		while (argv[i][n] != '\0')
		{
			ft_putchar(argv[i][n]);
			n++;
		}
		ft_putchar('\n');
		i--;
	}
}
