/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:59:07 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/14 16:41:26 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"
#include "color.h"

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
		int		len;

		len = 7;

		tab = ft_read(argv, 1);
		if (ft_chkchr(tab) == FALSE || ft_chkgrid(tab) == FALSE)
			write(1, "error\n", 6);
		else
		{
			printf(LCY "\n\nChecking grid..................");
			printf("[" GRN " OK " RST "]\n");
		}
		dictio = ft_dct_init();
		dictio = ft_fill_dct_1(dictio);
		begin = ft_lst_init(tab);
		ft_fill_lst(tab, &begin);
		ft_get_type(&begin);
		if (ft_chktype(dictio, begin) == FALSE)
			write(1, "error\n", 6);
		else
		{
			printf(LCY "Checking shapes................");
			printf("[" GRN " OK " RST "]\n\n");
		}
		ft_type_angle(&dictio, &begin);
		ft_fix_shape(&begin);
		ft_fill_shp(&begin);
		
		t_lst *lst;
		lst = begin;
		while (lst->next != NULL)
		{
			printf("block id = %d\n", lst->id);
			printf((lst->used == FALSE) ? "USED : FALSE\n" : "USED TRUE\n");
			ft_print_blk(lst->shp);
			lst = lst->next;
		}
		ret = ft_get_map(len);
		ft_print_map(ret);
		ft_putchar('\n');
		ret = ft_put_blk(&begin, ret, len);
		if(ret)
			ft_print_map_color(ret);
		ft_putchar('\n');
	}
	return (0);
}
