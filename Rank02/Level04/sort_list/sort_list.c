#include "list.h"

t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list  *tmp;
    int     swap;

    if (!lst)
        return (NULL);

    tmp = lst;
    while (tmp->next)
    {
        if (!cmp(tmp->data, tmp->next->data))
        {
            swap = tmp->data;
            tmp->data = tmp->next->data;
            tmp->next->data = swap;
            tmp = lst;          // reiniciar para asegurar orden correcto
        }
        else
            tmp = tmp->next;
    }
    return (lst);
}
