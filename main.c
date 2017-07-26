/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 02:43:26 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/26 10:10:05 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[BUF_SIZE + 1];
	char	*str;
	char 	*finalstring;
	int		ret;

	i = 1;

	if (argc == 1)
	{
		//todo: read from stdin
	}
	//somehow get file size here and malloc appropriately
	str = (char*)malloc(sizeof(char) * 500);
	while (i < argc)
	{
		//reset string here
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			ft_putstr("opening file failed\n");//display error, open failed
		//read file
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			str = ft_strcat(str, buf);
		}
		ft_putstr(str);
		//execute find biggest map with str

		//print str
		finalstring = transform_to_string(arr, pos, size);

		if (close(fd) == -1)
			ft_putstr("closing failed\n");//close failed
		i++;
	}
	return (0);
}
