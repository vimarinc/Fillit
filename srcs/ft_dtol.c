/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 13:51:11 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/02 15:53:34 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "pattern.h"
#include "header.h"

char	**ft_dtol(char **tab)
{
	int		index;
	int		col;
	char	letter;

	col = -1;
	letter = 'A';
	while (tab[++col])
	{
		index = -1;
		while (tab[col][++index])
		{
			if (tab[col][index] == '#')
				tab[col][index] = letter;
		}
		++letter;
	}
	return (tab);
}
