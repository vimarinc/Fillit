/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_shape.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <guillaume.lariviere@stude>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 18:47:18 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/06 11:17:09 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "pattern.h"
#include "header.h"

void		ft_get_shape(char *tab, t_list *begin_lst)
{
	t_list	*lst;
	int		index;
	int		lst_i;

	lst = begin_lst;
	index = -1;
	lst_i = 0;
	while(tab[++index])
	{
		if (tab[index] == '\n' && tab[index - 1] == '\n')
		{
			lst->shape[lst_i] = '\0';
			lst_i = 0;
			lst = lst->next;
		}
		else
		{
			if (tab[index] == '\n' && tab[index - 1] != '\n')
				lst->shape[lst_i] = '\n';
			else
				lst->shape[lst_i] = tab[index];
			lst_i++;
		}
	}
}
