/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 19:27:48 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/18 18:30:24 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	const char	*c = argv[0];
	int			i;

	i = 0;
	if (argc)
	{
		while (c[i] != '\0')
		{
			ft_putchar(c[i]);
			i++;
		}
	}
	ft_putchar('\n');
}
