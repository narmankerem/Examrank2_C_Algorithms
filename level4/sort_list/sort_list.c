#include <stdlib.h>
#include "sort_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	t_list *first;
	first = lst;
	while(lst->next != NULL)
	{
		if(((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = first;
		}
		else
			lst = lst->next;

	}
	lst = first;
	return (lst);
}