
#include "libft.h"
#include "header.h"

#include <stdio.h>

t_lst		*ft_get_type(t_lst *begin_lst)
{
	t_lst	*lst;
	int		index;
	int		cursor;
	int		*ret;
	int		ret_i;

	lst = begin_lst;
	cursor = ft_lstlen(begin_lst) + 1;
	ret = (int *)malloc(sizeof(int) * 6);
	while (--cursor)
	{
		index = -1;
		ret_i = 0;
		while (lst->shape[++index])
		{
			if ((lst->shape[index] == '.')
					&& ((lst->shape[index - 5] == '#' && lst->shape[index + 1] == '#')
					|| (lst->shape[index + 1] == '#' && lst->shape[index + 5] == '#')
					|| (lst->shape[index - 1] == '#' && lst->shape[index + 5] == '#')
					|| (lst->shape[index - 5] == '#' && lst->shape[index - 1] == '#')))
			{
				ret[ret_i] = 0;
				ret_i++;
			}
			if (lst->shape[index] == '#')
			{
				ret[ret_i] = 1;
				ret_i++;
			}
			printf("RET[%d] = %d\n", ret_i, ret[ret_i]);
		}
		printf("\n");
		/*lst->type = ft_atoi(ret);
		printf("lst->type INT CODE = %d\n", lst->type);
		*/lst = lst->next;
	}
	return (begin_lst);
}
