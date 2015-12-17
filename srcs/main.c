/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:59:07 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/17 14:13:08 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		main(int argc, char **argv)
{
/*	if (argc == 2)
	{
		char	*tab;
		t_lst	*begin;
		t_dct	*dictio;
		char	**ret;
		int		len;

		tab = ft_read(argv, 1);
		if (ft_chkchr(tab) == FALSE || ft_chkgrid(tab) == FALSE)
			write(1, "error\n", 6);
		else
		{
			printf(LCY "\n\nChecking grid..................");
			printf("[" GRN " OK " LCY "]\n" RST);
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
			printf("[" GRN " OK " LCY "]\n" RST);
		}
		ft_type_angle(&dictio, &begin);
		ft_fix_shape(&begin);
		ft_fill_shp(&begin);
		ft_rm_last(&begin);

		printf(LCY "Tetriminos detected............[" GRN " 0%d " LCY "]\n\n", ft_lstlen(begin));
		
		t_lst *lst;
		lst = begin;
		while (lst->next != NULL)
		{
			printf("id: %d\n", lst->id);
			ft_print_blk(lst->shp);
			lst = lst->next;
		}
		printf("id: %d\n", lst->id);
		ft_print_blk(lst->shp);
		
		len = (ft_lstlen(begin) <= 8) ? 2 : 5;
		ret = ft_get_map(len);
		ft_print_map(ret);
		ft_putchar('\n');

		t_point		p;

		p.x = 0;
		p.y = 0;
		
		while ((ret = ft_bt(begin, begin, ret, len, p)) == NULL)
		{
			ft_lst_clr(begin);
			ret = ft_get_map(++len);
		}
		ft_putchar('\n');
		if(ret)
			ft_print_map_color(ret);
		ft_putchar('\n');
		ft_free_all(&dictio, &begin, ret);
	}
	return (0);
*/	ft_fillit(argc, argv);
	return (0);
}
