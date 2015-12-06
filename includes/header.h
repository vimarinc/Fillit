/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:07:59 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/06 14:18:43 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <stdlib.h>
# include <sys/uio.h>
# include <unistd.h>
#include <sys/types.h>

# define BUFFER 546
# define TRUE 1
# define FALSE 0

char				*ft_read(char **av, int index);
t_bool				ft_chkchr(char *tab);
t_bool				ft_chkgrid(char *tab);


typedef int			t_bool;
typedef struct		s_lst
{
	int				id;
	t_bool			used;
	char			*shape;
	char			*type;
	char			type_id;
	int				angle;
	struct s_lst	*next;
}					t_lst;

#endif
