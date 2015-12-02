/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:13:49 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/02 12:04:08 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "pattern.h"
#include "header.h"

char	*ft_read(char **av, int index)
{
	int					fd;
	unsigned long long	rd;
	char				*ret;

	ret = (char *)malloc(sizeof(char) * BUFFER);
	fd = open(av[index], O_RDONLY);
	rd = read(fd, ret, BUFFER);
	close (fd);
	return (ret);
}
