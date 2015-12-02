/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:59:07 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/02 15:51:18 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "pattern.h"
#include "header.h"

#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*tab;
	char	**ret;
	int		i;

	tab = ft_read(argv, 1);
	ret = ft_dtol(ft_getdata(tab));
	
	i = -1;
	while (ret[++i])
		printf("%s", ret[i]);
	return (0);
}
