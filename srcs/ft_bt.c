/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bt.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:56:20 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/16 13:57:50 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

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
	{
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
	if (ft_try(map, lst->shp, p.y, p.x))
	{
		map = ft_try_pl(map, lst->shp, p.y, p.x);
		lst->used = TRUE;
		p.x = (p.x + 1) % len;
		p.y = (p.x == 0) ? p.y + 1 : p.y;
		if (ft_bt(lst_start, lst_start, map, len, p) == NULL)
		{
			TEST
			p.y = (p.x == 0) ? p.y - 1 : p.y;
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
