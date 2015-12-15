/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map_color.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 14:49:01 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/15 18:50:15 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"
#include "color.h"

void	ft_print_map_color(char **map)
{
	int		col;
	int		line;

	col = -1;
	if (map != NULL)
	{
		while (map[++col] != NULL)
		{
			line = -1;
			while (map[col][++line])
			{
				if (map[col][line] == '.')
					printf(YEL "." RST);
				if (map[col][line] == 'A')
					printf(RED "A" RST);
				if (map[col][line] == 'B')
					printf(GRN "B" RST);
				if (map[col][line] == 'C')
					printf(BRN "C" RST);
				if (map[col][line] == 'D')
					printf(BLU "D" RST);
				if (map[col][line] == 'E')
					printf(MAG "E" RST);
				if (map[col][line] == 'F')
					printf(CYA "F" RST);
				if (map[col][line] == 'G')
					printf(GRY "G" RST);
				if (map[col][line] == 'H')
					printf(LMG "H" RST);
			}
			putchar('\n');
		}
	}
}
