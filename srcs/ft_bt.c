/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bt.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:56:20 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/14 18:29:49 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

char	**ft_bt(t_lst *lst, t_lst sleep, char **map, int len, t_point p)
{

	while (lst->used == TRUE)
		lst = lst->next;
	if (ft_try(map, lst->shp, p.y, p.x))
	{
		map = ft_try_pl(map, lst->shp, p.y, p.x);
		lst->used = TRUE;
		p.x = (p.x + 1) % len;
		p.y = (p.x == 0) ? p.y + 1 : p.y
		if ((map = ft_bt(lst, map, len, p)) == NULL)
		{
			p.y = (p.x == 0) ? p.y - 1 : p.y;
			p.x = (p.x == 0) ? len - 1 : p.x--;
			map = ft_try_sp(map, lst->shp, p);
			lst->used = SLEEP;
			ft_bt(lst, map, len, p);
		}
	}
}
