/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:40:07 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/13 12:47:00 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"


char		**ft_get_map(t_lst *begin_lst)
{
	char	**ret;
	int		i;
	int		j;
	int		len;

	i = -1;
	len = ft_lstlen(begin_lst) + 10;
	if (!(ret = (char **)malloc(sizeof(char *) * len + 1)))
		return (NULL);
	while (++i < len)
	{
		if (!(ret[i] = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		j = -1;
		while (++j < len)
			ret[i][j] = '.';
		ret[i][j] = '\0';
	}
	ret[len] = NULL;
	return (ret);
}
