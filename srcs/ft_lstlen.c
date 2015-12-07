
#include "libft.h"
#include "header.h"

int		ft_lstlen(t_lst *begin_lst)
{
	t_lst	*lst;

	lst = begin_lst;
	while (lst->next != NULL)
		lst = lst->next;
	return (lst->id);
}
