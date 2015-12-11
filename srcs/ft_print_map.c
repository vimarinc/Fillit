/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 18:33:22 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/11 18:48:54 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void		ft_print_map(char **tab, t_lst *begin_lst)
{
	int		len;
	int		index;

	index = -1;
	len = (ft_lstlen(begin_lst) / 2 + 1) * 4;
	while (++index < len)
		ft_putstr(tab[index]);
}
