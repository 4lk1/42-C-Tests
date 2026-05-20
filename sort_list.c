// Assignment name  : sort_list
// Expected files   : sort_list.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following functions:

// t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

// This function must sort the list given as a parameter, using the function
// pointer cmp to select the order to apply, and returns a pointer to the
// first element of the sorted list.

// Duplications must remain.

// Inputs will always be consistent.

// You must use the type t_list described in the file list.h
// that is provided to you. You must include that file
// (#include "list.h"), but you must not turn it in. We will use our own
// to compile your assignment.

// Functions passed as cmp will always return a value different from
// 0 if a and b are in the right order, 0 otherwise.

// For example, the following function used as cmp will sort the list
// in ascending order:

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

// #include "ft_list.h"

// t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
// {
// 	int		tmp;
// 	t_list	*begin;
// 	begin = lst;
// 	while (lst && lst->next)
// 	{
// 		if (cmp(lst->data, lst->next->data))
// 			lst = lst->next;
// 		else
// 		{
// 			tmp = lst->data;
// 			lst->data = lst->next->data;
// 			lst->next->data = tmp;
// 			lst = begin;
// 		}
// 	}
// 	return (begin);
// }

// t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
// {
// 	int		temp;
// 	t_list	*begin;
// 	begin = lst;
// 	while (lst && lst->next)
// 	{
// 		if (cmp(lst->data, lst->next->data))
// 			lst = lst->next;
// 		else
// 		{
// 			temp = lst->data;
// 			lst->data = lst->next->data;
// 			lst->next->data = temp;
// 			lst = begin;
// 		}
// 	}
// 	return (begin);
// }

// t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
// {
// 	int		temp;
// 	t_list	*begin;

// 	begin = lst;
// 	while (lst && lst->next)
// 	{
// 		if (cmp(lst->data, lst->next->data))
// 			lst = lst->next;
// 		else
// 		{
// 			temp = lst->data;
// 			lst->data = lst->next->data;
// 			lst->next->data = temp;
// 			lst = begin;
// 		}
// 	}
// 	return (begin);
// }

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}t_list;

// t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
// {
// 	int		temp;
// 	t_list	*begin;

// 	begin = lst;
// 	while (lst && lst->next)
// 	{
// 		if (cmp(lst->data, lst->next->data))
// 			lst = lst->next;
// 		else
// 		{
// 			temp = lst->data;
// 			lst->data = lst->next->data;
// 			lst->next->data = temp;
// 			lst = begin;
// 		}
// 	}
// 	return (begin);
// }

// /* comparison function  */
// /* ascending order		*/
// int	cmp(int a, int b)
// {
// 	return (a <= b);
// }

// /* create new node */
// t_list	*new_node(int value)
// {
// 	t_list	*node;

// 	node = malloc(sizeof(t_list));
// 	node->data = value;
// 	node->next = NULL;
// 	return (node);
// }

// /* print list */
// void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%d ", lst->data);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;
// 	t_list	*d;

// 	a = new_node(-121);
// 	b = new_node(3);
// 	c = new_node(17);
// 	d = new_node(1);

// 	a->next = b;
// 	b->next = c;
// 	c->next = d;

// 	printf("Before sorting:\n");
// 	print_list(a);

// 	a = sort_list(a, cmp);

// 	printf("After sorting:\n");
// 	print_list(a);

// 	return (0);
// }

// t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
// {
// 	int temp;
// 	t_list *r;

// 	r = lst;

// 	while(lst && lst->next)
// 	{
// 		if(cmp(lst->data, lst->next->data))
// 		{
// 			lst = lst->next;
// 		}
// 		else{
// 			temp = lst->data;
// 			lst->data = lst->next->data;
// 			lst->next->data = temp;
// 			lst = r;
// 		}
// 	}
// 	return r;
// }

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int t;
	t_list *s;

	s = lst;

	while(lst && lst->next)
	{
		if(cmp(lst->data, lst->next->data))
		{
			lst = lst->next;
		}
		else{
			t = lst->data;
			lst->data = lst->next->data;
			lst->next->data = t;
			lst = s;
		}
	}
	return s;
}
