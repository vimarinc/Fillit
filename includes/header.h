/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:07:59 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/16 13:58:04 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFFER 546
# define TRUE 1
# define FALSE 0
# define DEBUG 1
# define TEST if(DEBUG == 1){ft_putstr("DEBUG ");}

typedef int			t_bool;

typedef struct		s_lst
{
	int				id;
	t_bool			used;
	char			*shape;
	char			**shp;
	int				type;
	char			type_id;
	int				angle;
	struct s_lst	*next;
}					t_lst;

typedef struct		s_dct
{
	int				type;
	char			letter;
	int				rotation;
	struct s_dct	*next;
}					t_dct;

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

char				*ft_read(char **av, int index);
t_bool				ft_chkchr(char *tab);
t_bool				ft_chkgrid(char *tab);
t_lst				*ft_lst_init(char *tab);
void				ft_fill_lst(char *tab, t_lst **begin_lst);
int					ft_lstlen(t_lst *begin_lst);
int					ft_dctlen(t_dct *begin_dct);
void				ft_get_type(t_lst **begin_lst);
t_dct				*ft_dct_init(void);
t_dct				*ft_dct_blk(t_dct *begin_dct, int code, char ltr, int rot);
t_dct				*ft_fill_dct_1(t_dct *begin_dct);
void				ft_type_angle(t_dct **begin_dct, t_lst **begin_lst);
t_bool				ft_chktype(t_dct *begin_dct, t_lst *begin_lst);
void				ft_fix_shape(t_lst **begin_lst);
char				**ft_get_map(int len);
t_bool				ft_ismaj(char c);
void				ft_print_blk(char **blk);
void				ft_fill_shp(t_lst **start);
void				ft_print_map(char **map);
char				**ft_realloc(char **tab, int size);
char				**ft_try_pl(char **map, char **blk, int col, int line);
t_bool				ft_try(char **map, char **blk, int col, int line);
//char				**ft_put_blk(t_lst **start, char **map, int len);
void				ft_print_map_color(char **map);
char				**ft_rm_pl(char **map, char **blk);
void				ft_rm_last(t_lst **start);
char				**ft_bt(t_lst *lst_start, t_lst *lst, char **map,
							int len, t_point p);

void				ft_lst_clr(t_lst *start);
void				ft_free_all(t_dct **begin_dct, t_lst **begin_lst, char **map);
t_bool				ft_chk_err(int ac, char *buf);
void				ft_fillit(int ac, char **av);

#endif
