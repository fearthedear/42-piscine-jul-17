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
    int     **tab;

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
            make_it_numbers(&tab, str_no_information, g_height);
            ft_putstr("\narray with calculated numbers, passed back to get_information():\n");
            show(tab, g_height, g_length);
            //find biggest with arr
            ft_putstr("\ng_arr set to this:\n");
            show(g_arr, g_height, g_length);
            find_biggest(g_arr);


            //print str
            finalstring = transform_to_string(g_pos, g_dim);
            ft_putstr(finalstring);
        }
        if (close(fd) == -1)
            ft_putstr("closing failed\n");//close failed
		i++;
	}
	return (0);
}
