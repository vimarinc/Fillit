/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fix_shape.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 15:12:35 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/10 16:21:42 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

static void		ft_rm_col(char **tab)
{
	int		count;
	int		index;

	count = 0;
	index = -1;
	if (count == 0 && tab[0] == '.' && tab[5] == '.'
			&& tab[10] == '.' && tab[15] == '.')
		++count;
	if (count == 1 && tab[1] == '.' && tab[6] == '.'
			&& tab[11] == '.' && tab[16] == '.')
		++count;
	if (count == 2 && tab[2] == '.' && tab[7] == '.'
			&& tab[12] == '.' && tab[17] == '.')
		++count;
	while (tab[++index])
	{
		if (tab[index] == #)
		{
			tab[index] = '.';
			tab[index - count] = '#';
		}
	}
}

static void		ft_rm_ln(char **tab)
{
	int		index;
	int		count;

	index = -1;
	count = 0;
	if (count == 0 && tab[0] == '.' && tab[1] == '.'
			&& tab[2] == '.' && tab[3] == '.')
		count = 5;
	if (count == 1 && tab[5] == '.' && tab[6] == '.'
			&& tab[7] == '.' && tab[8] == '.')
		count = 10;
	if (count == 2 && tab[10] == '.' && tab[11] == '.'
			&& tab[12] == '.' && tab[13] == '.')
		count = 15;
	while(tab[++index])
	{
		if (tab[index] == '#')
		{
			tab[index] = '.';
			tab[index - count] = '#';
		}
	}
}

static void		ft_dtol(char **tab, int id)
{
	int		index;

	index = -1;
	while (tab[++index])
	{
		if (tab[index] == '#')
			tab[index] = 'A' + id;
	}
}
/*
static void		ft_clean(char **tab)
{
	int		index;

	index = ft_strlen(tab);
	while (tab[--index])
	{
		if
	}
}*/

void	ft_fix_shape(t_lst **begin_lst)
{
	t_lst	lst;

	lst = *begin_lst;
	while (lst->next != NULL)
	{
		ft_rm_col(&(lst->shape));
		ft_rm_ln(&(lst->shape));
		ft_dtol(&(lst->shape), lst->id);
		lst = lst->next;
	}
}
