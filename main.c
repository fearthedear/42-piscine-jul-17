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
    char    *str_no_information;
	char 	*finalstring;
	int		ret;
	int 	**tab;

	i = 1;

	if (argc == 1)
	{
		//todo: read from stdin
	}
	//somehow get file size here and malloc appropriately
	str = (char*)malloc(sizeof(char) * 5000);
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
        ft_putstr("input map is this:\n");
        ft_putstr(str);

        //transform str to array
        str_no_information = (char*)malloc(sizeof(char) * ft_strlen(str));
        str_no_information = get_information(str);
        if (ft_strcmp(str_no_information, "error") != 0)
        {
            make_it_numbers(&tab, str_no_information, g_height, 1);
            //find biggest with arr
            find_biggest(tab);

            //print str
			//get original string with 0+1
			free(tab);
			make_it_numbers(&tab, str_no_information, g_height, 0);
            finalstring = transform_to_string(tab, g_pos, g_dim);
            ft_putstr(finalstring);
			free(tab);
        }
        if (close(fd) == -1)
            ft_putstr("closing failed\n");//close failed
		i++;
	}
	return (0);
}
