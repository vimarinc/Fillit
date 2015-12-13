/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_blk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 10:28:23 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/13 11:31:51 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void		ft_print_blk(char **blk)
{
	int		col;

	col = -1;
	while (++col < 4)
	{
		ft_putstr(blk[col]);
		ft_putchar('\n');
	}
}
