/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:59:07 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/08 09:23:00 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*tab;
		t_lst	*begin;

		tab = ft_read(argv, 1);
		if (ft_chkchr(tab) == FALSE || ft_chkgrid(tab) == FALSE)
			write(1, "error\n", 6);
		else
			write(1, "NICE !\n", 7);
		begin = ft_lst_init(tab);
		begin = ft_fill_lst(tab, begin);
		begin = ft_get_type(begin);
		while (begin->next != NULL)
		{
			printf("maillon id = %d\n", begin->id);
			printf("block :\n%s", begin->shape);
			printf("type = %d\n\n", begin->type);
			begin = begin->next;
		}
	}
	return (0);
}
