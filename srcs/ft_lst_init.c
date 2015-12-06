/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <guillaume.lariviere@stude>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 17:10:15 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/06 14:18:00 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "pattern.h"
#include "header.h"

void		ft_lst_add(t_list *begin_lst)
{
	t_list	*cursor;
	t_list	*lst;

	cursor = begin_lst;
	while (cursor->next != NULL)
		cursor = cursor->next;
	if (!(lst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	cursor->next = (*lst);
	lst->prev = (*cursor);
	lst->next = NULL;
	lst->id = cursor->id++;
	lst->used = FALSE;
	lst->shape = (char *)malloc(sizeof(char) * 21);
	lst->type = (char *)malloc(sizeof(char) * 7);
	lst->type_id = 'X';
	lst->angle = 0;
}

t_list		ft_get_begin(char *tab)
{
	t_list	*lst;

	if (!(lst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	lst->prev = NULL;
	lst->id = 1;
	lst->used = FALSE;
	lst->next = NULL;
	lst->shape = (char *)malloc(sizeof(char) * 21);
	lst->type = (char *)malloc(sizeof(char) * 7);
	lst->type_id = 'X';
	lst->angle = 0;
	return (lst);
}

void		ft_lst_init(char *tab, t_list *begin_lst)
{
	t_list	*lst;
	int		cursor;

	lst = begin_lst;
	cursor = ft_strlen(tab) / 20 + 2;
	while (--cursor)
	{
		
	}
}
