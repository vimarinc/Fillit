/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:59:07 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/06 14:19:47 by glarivie         ###   ########.fr       */
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

		tab = ft_read(argv, 1);
		if (ft_chkchr(tab) == FALSE || ft_chkgrid(tab) == FALSE)
		{
			write(1, "error\n", 6);
			return (0);
		}
		else
			write(1, "NICE !\n", 7);
	}
	return (0);
}
