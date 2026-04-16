#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

t_list  *create_node(void *data)
{
    t_list *node = malloc(sizeof(t_list));
    if (!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    return node;
}

void    print_list(t_list *list)
{
    while (list)
    {
        printf("%s -> ", (char *)list->data);
        list = list->next;
    }
    printf("NULL\n");
}

int cmp_str(void *a, void *b)
{
    return strcmp((char *)a, (char *)b);
}

int main(void)
{
    // Crear lista: "Hola" -> "Mundo" -> "Hola" -> "42"
    t_list *n1 = create_node("Hola");
    t_list *n2 = create_node("Mundo");
    t_list *n3 = create_node("Hola");
    t_list *n4 = create_node("42");

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    printf("Antes:\n");
    print_list(n1);

    ft_list_remove_if(&n1, "Hola", cmp_str);

    printf("\nDespués de eliminar \"Hola\":\n");
    print_list(n1);

    return 0;
}
