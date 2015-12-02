/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:07:59 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/02 15:50:47 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <stdlib.h>
# include <sys/uio.h>
# include <unistd.h>
#include <sys/types.h>

# define int	t_bool
# define BUFFER 546

char	*ft_read(char **av, int index);
char	**ft_getdata(char *tab);
char	**ft_dtol(char **tab);

#endif
