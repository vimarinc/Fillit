/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chk_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 12:07:15 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/16 13:37:15 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_bool		ft_chk_err(int ac, char *buf)
{
	if (ac != 2 || ft_chkchr(buf) == FALSE || ft_chkgrid(buf) == FALSE)
	{
		ft_putstr("error\n");
		return (FALSE);
	}
	return (TRUE);
}
