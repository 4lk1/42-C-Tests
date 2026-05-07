// Assignment name  : ft_list_remove_if
// Expected files   : ft_list_remove_if.c
// Allowed functions: free
// --------------------------------------------------------------------------------

// Write a function called ft_list_remove_if that removes from the
// passed list any element the data of which is "equal" to the reference data.

// It will be declared as follows :

// void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

// cmp takes two void* and returns 0 when both parameters are equal.

// You have to use the ft_list.h file, which will contain:

// $>cat ft_list.h
// typedef struct      s_list
// {
//     struct s_list   *next;
//     void            *data;
// }                   t_list;
// $>

#include "ft_list.h"
#include <stdlib.h>

// void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
// {
// 	t_list	*tmp;
// 	// Remove elements from the beginning if needed
// 	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
// 	{
// 		tmp = *begin_list;
// 		*begin_list = (*begin_list)->next;
// 		free(tmp);
// 	}
// 	// Traverse the rest of the list
// 	while (*begin_list && (*begin_list)->next)
// 	{
// 		if (cmp((*begin_list)->next->data, data_ref) == 0)
// 		{
// 			tmp = (*begin_list)->next;
// 			(*begin_list)->next = tmp->next;
// 			free(tmp);
// 		}
// 		else
// 			*begin_list = (*begin_list)->next;
// 	}
// }

// void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
// {
// 	t_list	*temp;
// 	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
// 	{
// 		temp = *begin_list;
// 		*begin_list = (*begin_list)->next;
// 		free(temp);
// 	}
// 	while (*begin_list && (*begin_list)->next)
// 	{
// 		if (cmp((*begin_list)->next->data, data_ref) == 0)
// 		{
// 			temp = (*begin_list)->next;
// 			(*begin_list)->next = temp->next;
// 			free(temp);
// 		}
// 		else
// 			(*begin_list) = (*begin_list)->next;
// 	}
// }

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*temp;

	while ((*begin_list) && cmp((*begin_list)->data, data_ref))
	{
		temp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(temp);
	}
	while (*begin_list && (*begin_list)->next)
	{
		if (cmp((*begin_list)->next->data, data_ref) == 0)
		{
			temp = (*begin_list)->next;
			(*begin_list)->next = temp->next;
			free(temp);
		}
		else
			(*begin_list) = (*begin_list)->next;
	}
}
