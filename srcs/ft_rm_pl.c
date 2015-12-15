/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rm_pl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 13:01:01 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/15 16:07:13 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

char		**ft_rm_pl(char **map, char **blk)
{
	t_point		p;
	char		c;

	p.x = -1;
	c = '\0';
	while (blk[0][(p.x = p.x + 1)])
	{
		if (ft_ismaj(blk[p.y][p.x]))
			c = blk[p.y][p.x];
	}
	if (ft_ismaj(c))
	{
		p.y = -1;
		while (map[(p.y)++] != NULL)
		{
			p.x = -1;
			while (map[p.y][(p.x = p.x + 1)])
			{
				if (map[p.y][p.x] == c)
					map[p.y][p.x] = '.';
			}
		}
	}
	return (map);
}
