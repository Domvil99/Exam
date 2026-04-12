#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list);

t_list *create_node(void *data)
{
    t_list *node = malloc(sizeof(t_list));
    node->data = data;
    node->next = NULL;
    return node;
}

int main(void)
{
    t_list *n1 = create_node("Hola");
    t_list *n2 = create_node("Mundo");
    t_list *n3 = create_node("Domvil");

    n1->next = n2;
    n2->next = n3;

    printf("Tamaño de la lista: %d\n", ft_list_size(n1));

    return 0;
}
