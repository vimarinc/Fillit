/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 12:05:03 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/16 14:03:05 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

static void		ft_debug(t_lst *begin_lst)
{
	if (DEBUG)
	{
		while (begin_lst != NULL)
		{
			ft_putstr("id : ");
			ft_putnbr(begin_lst->id);
			ft_putchar('\n');
			ft_print_blk(begin_lst->shp);
			ft_putchar('\n');
			begin_lst = begin_lst->next;
		}
	}
}

void	ft_fillit(int ac, char **av)
{
	char		*buf;
	t_dct		*begin_dct;
	t_lst		*begin_lst;
	char		**map;
	int			len;
	t_point		p;

	p.x = 0;
	p.y = 0;
	buf = ft_read(av, 1);
	if (ft_chk_err(ac, buf) == FALSE)
		return ;
	begin_dct = ft_fill_dct_1(ft_dct_init());
	begin_lst = ft_lst_init(buf);
	ft_fill_lst(buf, &begin_lst);
	ft_get_type(&begin_lst);
	if (ft_chktype(begin_dct, begin_lst) == FALSE)
		return ;
	ft_type_angle(&begin_dct, &begin_lst);
	ft_fix_shape(&begin_lst);
	ft_fill_shp(&begin_lst);
	ft_rm_last(&begin_lst);

	ft_debug(begin_lst);

	len = 2;
	map = ft_get_map(len);
	while ((map = ft_bt(begin_lst, begin_lst, map, len, p)) == NULL)
	{
		ft_lst_clr(begin_lst);
		map = ft_get_map(++len);
	}

	ft_putchar('\n');

	if (map)
		ft_print_map(map);
	ft_free_all(&begin_dct, &begin_lst, map);
}
