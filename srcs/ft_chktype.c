/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chktype.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 23:05:52 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/15 14:42:37 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

t_bool		ft_chktype(t_dct *begin_dct, t_lst *begin_lst)
{
	t_dct	*dct;
	t_lst	*lst;
	int		count;

	lst = begin_lst;
	count = 0;
	while (lst->next != NULL)
	{
		dct = begin_dct;
		while (dct->next != NULL)
		{
			if (lst->type == dct->type)
			{
				count++;
				break;
			}
			else
				dct = dct->next;
		}
		lst = lst->next;
	}
	return ((count == ft_lstlen(begin_lst) - 1) ? TRUE : FALSE);
}
