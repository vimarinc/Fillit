/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 09:27:00 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/09 15:01:41 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		ft_lstlen(t_lst *begin_lst)
{
	t_lst	*lst;

	lst = begin_lst;
	while (lst->next != NULL)
		lst = lst->next;
	return (lst->id);
}

int		ft_dctlen(t_dct *begin_dct)
{
	t_dct	*dct;
	int		cursor;

	dct = begin_dct;
	cursor = 0;
	if (begin_dct == NULL)
		return (1);
	while (dct->next != NULL)
	{
		cursor++;
		dct = dct->next;
	}
	return (cursor);
}
