/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_blk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 14:23:57 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/13 14:55:20 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

char		**ft_put_blk(t_lst **start, char **map)
{
	int		len;
	t_lst	*lst;
	int		col;
	int		line;

	len = ft_lstlen(*start);
	lst = *start;
	while (lst->next != NULL)
	{
		
		if (lst->used == TRUE)
			lst = lst->next;
		else
		{
			col = -1;
			while (++col < len)
			{
				line = -1;
				while (++line < len)
				{
					if (lst->used == FALSE)
					{					
						if (ft_try(map, lst->shp, col, line))
						{
							map = ft_try_pl(map, lst->shp, col, line);
							lst->used = TRUE;
						}
					}
				}
			}
		}
	}
	return (map);
}
