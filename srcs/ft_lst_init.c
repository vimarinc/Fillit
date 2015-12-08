/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <guillaume.lariviere@stude>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 17:10:15 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/08 09:30:39 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

static t_lst	*ft_lst_add(t_lst *begin_lst, int id)
{
	t_lst	*lst;

	if (!(lst = (t_lst *)malloc(sizeof(t_lst))))
		return (NULL);
	lst->id = id - 1;
	lst->used = FALSE;
	lst->next = begin_lst;
	lst->shape = (char *)malloc(sizeof(char) * 21);
	return (lst);
}

t_lst			*ft_lst_init(char *tab)
{
	t_lst	*begin_lst;
	int		cursor;

	if (!(begin_lst = (t_lst *)malloc(sizeof(t_lst))))
		return (NULL);
	cursor = ft_strlen(tab) / 20 + 1;
	begin_lst->next = NULL;
	begin_lst->id = cursor - 1;
	begin_lst->used = FALSE;
	begin_lst->shape = (char *)malloc(sizeof(char) * 21);
	while (--cursor)
		begin_lst = ft_lst_add(begin_lst, cursor);
	return (begin_lst);
}
