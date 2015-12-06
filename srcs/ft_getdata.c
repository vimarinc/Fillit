/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getdata.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:07:28 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/05 19:24:45 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "pattern.h"
#include "header.h"

char	**ft_getdata(char *tab)
{
	char	**ret;
	int		index_tab;
	int		index_ret;
	int		columns;
	int		index;

	index_ret = 0;
	index_tab = 0;
	columns = 0;
	index = -1;
	ret = (char **)malloc(sizeof(char *) * (ft_strlen(tab) / 20) + 1);
	while (++index < (ft_strlen(tab) / 20))
		ret[index] = (char *)malloc(sizeof(char) * 21);
	while (tab[index_tab])
	{
		if (tab[index_tab] == '\n' && tab[index_tab - 1] == '\n')
		{
			ret[columns][index_ret] = '\0';
			columns++;
			index_ret = 0;
		}
		else
		{
			if (tab[index_tab] == '\n' && tab[index_tab - 1] != '\n')
				ret[columns][index_ret] = '\n';
			else
				ret[columns][index_ret] = tab[index_tab];
			index_ret++;
		}
		index_tab++;
	}
	ret[(ft_strlen(tab) / 20)] = NULL;
	return (ret);
}
