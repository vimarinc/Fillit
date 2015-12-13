/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 15:58:32 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/13 16:41:21 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void t_bool		ft_chk_ln(char **map, int ln)
{
	int		line;
	int		count;

	line = ln + 1;
	count = 0;
	if (map[ln] != NULL && map[ln][ln] != '\0')
	{
		while (--line >= 0)
		{
			if (map[ln][line] == '.')
				count++;
			else
				break ;
		}
		if (count == ft_strlen(map[ln]))
			return (TRUE);
	}
	return (FALSE);
}

void t_bool		ft_chk_col(char **map, int cl)
{
	int		col;
	int		count;

	col = cl + 1;
	count = 0;
	if (map[cl] != NULL && map[cl][cl] != '\0')
	{
		while (--col >= 0)
		{
			if (map[col][cl] == '.')
				count++;
			else
				break ;
		}
		if (count == ft_strlen(map[cl]))
			return (TRUE);
	}
	return (FALSE);
}

char		**ft_clean_map(char **map)
{
	int		col;
	int		line;

	while (ft_chk_ln(map, line) && ft_chk_col(map, col))
	{
	col = ft_strlen(map[0]) - 1;
	line = col;
		map = ft_realloc(map, )
	}
}
