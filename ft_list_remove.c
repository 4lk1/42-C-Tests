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

#include <stdlib.h>
#include <ft_list.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *temp;
    t_list *actual;

    if(!begin_list || !*begin_list)
    return;
    while(*begin_list && cmp((*begin_list) -> data, data_ref) == 0)
    {
        temp = begin_list;
        *begin_list = (*begin_list) -> next;
        free(temp);
    }
    actual = *begin_list;
    while(actual && actual -> next)
    {
        if(cmp(actual -> data, data_ref) == 0)
        {
            temp = actual->next;
            actual ->next = actual ->next ->next;
            free(temp);
        }
        else
        actual = actual->next; 
    }

}