#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

char **make_area(char **zone, t_point size)
{
    char **new = malloc(sizeof(char*) * size.y); //filas
    if(!new)
        return(NULL);

    char **row_ptr = new;

    while (row_ptr < new + size.y)
    {
        *row_ptr = malloc(size.x + 1); //columnas
        if(!row_ptr)
            return(NULL);

        char *src = zone[row_ptr - new];
        char *dst = *row_ptr;

        while (dst < *row_ptr + size.x)
        {
            *dst = *src;
            dst++;
            src++;
        }

        *dst = '\0';
        row_ptr++;
    }

    return new;
}

int main(void)
{
    t_point size = (t_point){8, 5};
    char *zone[] = {
        "11111111",
        "10001001",
        "10010001",
        "10110001",
        "11100001",
    };

    char **area = make_area(zone, size);

    char **row = area;
    while (row < area + size.y)
    {
        printf("%s\n", *row);
        row++;
    }
    printf("\n");

    t_point begin = (t_point){7, 4};
    flood_fill(area, size, begin);

    row = area;
    while (row < area + size.y)
    {
        printf("%s\n", *row);
        row++;
    }

    return 0;
}
