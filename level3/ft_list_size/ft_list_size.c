#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	struct s_list *next;
	void          *data;
}			   t_list;

int ft_list_size(t_list *begin_list)
{
	int i;
	i = 0;
	while(begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

int main()
{
    // Allocate memory for the list nodes
    t_list *lst = malloc(sizeof(t_list));
    t_list *lst1 = malloc(sizeof(t_list));
    t_list *lst2 = malloc(sizeof(t_list));

    // Initialize the list
    lst->next = lst1;
    lst1->next = lst2;
    lst2->next = NULL;

    // Set data for the list nodes (optional)
    lst->data = NULL;
    lst1->data = NULL;
    lst2->data = NULL;

    // Print the size of the list
    printf("%d\n", ft_list_size(lst));

    // Free the allocated memory
    free(lst);
    free(lst1);
    free(lst2);

    return 0;
}
