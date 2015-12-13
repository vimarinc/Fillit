/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:59:07 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/13 12:49:20 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

#include <stdio.h>
#define DEBUG	printf("DEBUG\n");

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*tab;
		t_lst	*begin;
		t_dct	*dictio;
		char	**ret;

		tab = ft_read(argv, 1);
		if (ft_chkchr(tab) == FALSE || ft_chkgrid(tab) == FALSE)
			write(1, "error\n", 6);
		else
			write(1, "NICE !\n", 7);
		dictio = ft_dct_init();
		dictio = ft_fill_dct_1(dictio);
		begin = ft_lst_init(tab);
		ft_fill_lst(tab, &begin);
		ft_get_type(&begin);
		if (ft_chktype(dictio, begin) == FALSE)
			write(1, "error\n", 6);
		else
			write(1, "NICE !\n", 7);
		ft_type_angle(&dictio, &begin);
		ft_fix_shape(&begin);
		ft_fill_shp(&begin);
		while (begin->next != NULL)
		{
			printf("block id: %d\n", begin->id);
			ft_print_blk(begin->shp);
			begin = begin->next;
		}
		ret = ft_get_map(begin);
		ret[0][0] = '#';
		ret[7][7] = '#';
		ft_print_map(ret);

		ft_putchar('\n');
		ret = ft_realloc(ret, 19);
		ft_print_map(ret);

		ret = ft_realloc(ret, 20);
		ft_putchar('\n');
		ft_print_map(ret);
	}
	return (0);
}
