/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:13:49 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/06 14:17:40 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

char	*ft_read(char **av, int index)
{
	int					fd;
	unsigned long long	rd;
	char				*tab;

	tab = (char *)malloc(sizeof(char) * BUFFER);
	fd = open(av[index], O_RDONLY);
	rd = read(fd, tab, BUFFER);
	close (fd);
	return (tab);
}
