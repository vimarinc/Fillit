/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 09:27:00 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/08 09:28:08 by glarivie         ###   ########.fr       */
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
