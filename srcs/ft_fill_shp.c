/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_shp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 10:37:33 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/13 11:34:16 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

static char		**ft_clean_blk(char **blk)
{
	int		col;
	int		line;

	col = 4;
	while (--col >= 0)
	{
		line = 4;
		while (--line >= 0)
		{
			if (ft_ismaj(blk[col][line]) || blk[col][line] == '\n')
				break ;
			blk[col][line] = ' ';
		}
	}
	return (blk);
}

void			ft_fill_shp(t_lst **start)
{
	t_lst		*lst;
	int			index;
	int			col;
	int			line;

	lst = *start;
	while (lst->next != NULL)
	{
		index = -1;
		col = 0;
		line = 0;
		while (lst->shape[++index])
		{
			if (ft_ismaj(lst->shape[index]) || lst->shape[index] == '.')
			{
				lst->shp[col][line] = lst->shape[index];
				line++;
			}
			if (lst->shape[index] == '\n')
			{
				line = 0;
				col++;
			}
		}
		lst->shp = ft_clean_blk(lst->shp);
		lst = lst->next;
	}
}
