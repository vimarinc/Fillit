/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 11:46:02 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/13 16:41:24 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

static char		*ft_cpystr(char *ret, char *tab, int size)
{
	int			index;

	index = 0;
	while (tab[index] && index < size)
	{
		ret[index] = tab[index];
		index++;
	}
	ret[size] = '\0';
	return (ret);
}

char			**ft_realloc(char **tab, int size)
{
	char		**ret;
	int			col;

	col = -1;
	if (!(ret = (char **)malloc(sizeof(char *) * size + 1)))
		return (NULL);
	while (++col < size)
	{
		if(!(ret[col] = (char *)malloc(sizeof(char) * size + 1)))
			return (NULL);
		ft_memset(ret[col], '.', size);
		if (tab[col] != NULL)
			ft_cpystr(ret[col], tab[col], size);
	}
	col = -1;
	while (tab[++col] != NULL)
		free(tab[col]);
	free(tab);
	ret[size] = NULL;
	return (ret);
}
