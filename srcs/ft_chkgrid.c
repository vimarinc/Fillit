/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chkgrid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 11:42:48 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/06 14:20:14 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

static int	ft_chrcnt(char *tab, char c)
{
	return ((*tab == c) ? 1 + ft_chrcnt(++tab) : 0);
}

t_bool		ft_chkgrid(char *tab)
{
	int		line;
	int		blk;
	int		index;
	int		count;

	line = 0;
	blk = 0;
	index = -1;
	count = 0;
	while (tab[++index])
	{
		if (tab[index] == '.' || tab[index] == '#')
			count++;
		if (tab[index] == '\n' && tab[index - 1] != '\n' && count == 4)
			line++;
		if (tab[index] == '\n' && tab[index - 1] == '\n' && (line % 4) == 0)
			blk++;
	}
	if (tab[index] == '\0' && (line % 4) == 0)
		blk++;
	if (ft_chrcnt(tab, '.') == (blk * 12)
			&& ft_chrcnt(tab, '#') == (blk * 4)
			&& ft_chrcnt(tab, '\n') == (line + block - 1))
		return (TRUE)
			return (FALSE);
}
