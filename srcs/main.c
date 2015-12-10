/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:59:07 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/10 15:10:12 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

#include <stdio.h>
#define DEBUG	printf("DEBUG\n");

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*tab;
		t_lst	*begin;
		t_dct	*dictio;

		tab = ft_read(argv, 1);
		if (ft_chkchr(tab) == FALSE || ft_chkgrid(tab) == FALSE)
			write(1, "error\n", 6);
		else
			write(1, "NICE !\n", 7);
		dictio = ft_dct_init();
		dictio = ft_fill_dct_1(dictio);
		begin = ft_lst_init(tab);
		ft_fill_lst(tab, &begin);
		ft_get_type(&begin);
		if (ft_chktype(dictio, begin) == FALSE)
			write(1, "error\n", 6);
		else
			write(1, "NICE !\n", 7);
		ft_type_angle(&dictio, &begin);
		while (begin->next != NULL)
		{
			printf("id: %d, type: %d\n", begin->id, begin->type);
			printf("letter: %c, angle: %d\n", begin->type_id, begin->angle);
			printf("%s\n", begin->shape);
			begin = begin->next;
		}
		printf("NB block : %d\n", ft_dctlen(dictio));
		while (dictio->next != NULL)
		{
			printf("code: %d, ltr: %c, rot: %d\n", dictio->type, dictio->letter, dictio->rotation);
			dictio = dictio->next;
		}
	}
	return (0);
}
