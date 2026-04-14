#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int ft_list_size(t_list *begin_list);

t_list *node_creator(void *data)
{
    t_list *node = malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    return(node);
}

int main(void)
{
    t_list *n1 = node_creator("uno");
    t_list *n2 = node_creator("dos");
    t_list *n3 = node_creator("tres");

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    printf("Tamaño de la lista: %d\n", ft_list_size(n1));
}