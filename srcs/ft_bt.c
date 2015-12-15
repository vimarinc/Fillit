/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bt.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:56:20 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/15 20:25:41 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

#include <stdio.h>
#define DED ft_putstr("DEBUG\n");

static t_bool	ft_isplaced(t_lst *start)
{
	while (start->next != NULL)
	{
		if (start->used == FALSE)
			return (FALSE);
		start = start->next;
	}
	return (TRUE);
}

char	**ft_bt(t_lst *lst_start, t_lst *lst, char **map, int len, t_point p)
{
	if (lst == NULL)
	{DED
		if (p.x == 0 && p.y == 0)
			return (NULL);
		p.x = (p.x + 1) % len;
		p.y = (p.x == 0) ? p.y + 1 : p.y;
		lst = lst_start;
	}
	if (p.y >= len)
		return (NULL);
	while (lst->used == TRUE)
	{
		printf("id = %d, used = %d\n", lst->id, lst->used);
		lst = lst->next;
		if (lst == NULL)
		{
			if (ft_isplaced(lst_start) == TRUE)
				return (map);
			p.x = (p.x + 1) % len;
			p.y = (p.x == 0) ? p.y + 1 : p.y;
			return (ft_bt(lst_start, lst_start, map, len, p));
		}
	}
		printf("id = %d, used = %d, y = %d, x = %d, lettre = %c\n", lst->id, lst->used, p.y, p.x, 'A' + lst->id);
	if (ft_try(map, lst->shp, p.y, p.x))
	{
		map = ft_try_pl(map, lst->shp, p.y, p.x);
		ft_print_map(map);
		lst->used = TRUE;
		p.x = (p.x + 1) % len;
		p.y = (p.x == 0) ? p.y + 1 : p.y;
		if (ft_bt(lst_start, lst_start, map, len, p) == NULL)
		{
DED			p.y = (p.x == 0) ? p.y - 1 : p.y;
			p.x = (p.x == 0) ? len - 1 : p.x--;
			map = ft_rm_pl(map, lst->shp);
			return (ft_bt(lst_start, lst->next, map, len, p));
		}
	}
	if (p.x == len - 1 && p.y == len - 1)
	{
		p.x = 0;
		p.y = 0;
		return (ft_bt(lst_start, lst->next, map, len, p));
	}
	p.x = (p.x + 1) % len;
	p.y = (p.x == 0) ? p.y + 1 : p.y;
	return (ft_bt(lst_start, lst, map, len, p));
}
