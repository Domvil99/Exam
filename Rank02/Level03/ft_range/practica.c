#include <stdlib.h>

int *ft_range(int start, int end)
{

}




































#include <stdlib.h>

int *ft_range(int start, int end)
{
    int len;
    int step;
    int *arr;
    int i = 0;

    // determinar tamaño y dirección (1, 3)  1, 2, 3
    if (start <= end)
    {
        len = end - start + 1;
        step = 1;
    }
    else
    {
        len = start - end + 1;
        step = -1;
    }

    arr = (int *)malloc(sizeof(int) * len);
    if (!arr)
        return (NULL);

    while (i < len)
    {
        arr[i] = start;
        start += step;
        i++;
    }

    return (arr);
}
