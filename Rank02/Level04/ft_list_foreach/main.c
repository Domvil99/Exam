#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void    print_data(void *data)
{
    printf("%s\n", (char *)data);
}

t_list  *create_node(void *data)
{
    t_list *node = malloc(sizeof(t_list));
    if (!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    return node;
}

int main(void)
{
    t_list *n1 = create_node("Hola");
    t_list *n2 = create_node("Mundo");
    t_list *n3 = create_node("42");

    n1->next = n2;
    n2->next = n3;

    ft_list_foreach(n1, print_data);

    return 0;
}
