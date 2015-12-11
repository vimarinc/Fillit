/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shrink_shape.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 15:24:00 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/11 16:16:02 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

static int		ft_shapelen(char *tab)
{
	int		index;
	int		len;
	int		count;

	len = 4;
	index = 0;
	while (tab[index])
	{
		count = 0;
		while (tab[index] != '\n')
		{
			if (tab[index] != '.')
				count++;
			index++;
		}
		if (count > 0)
			len++;
		index++;
	}
	return (len);
}

static char		*ft_rmk_tab(char *tab)
{
	char	*ret;
	int		index;
	int		ret_i;

	index = 0;
	ret_i = 0;
	ret = (char *)malloc(sizeof(char) * ft_shapelen(tab) + 1);
	ret[ft_shapelen(tab) + 1] = '\0';
	while (tab[index] == '.')
	{
		ret[ret_i] = tab[index];
		index++;
		ret_i++;
	}
	while (tab[index])
	{
		if (tab[index] != '.' && tab[index] != '\n')
			ret[ret_i] = tab[index];
		if (tab[index] == '.')
	}
}

void			ft_shrink_shape(t_lst **begin_lst)
{
	t_lst	lst;

	lst = *begin_lst;
	while (lst->next != NULL)
	{
		
	}
}
