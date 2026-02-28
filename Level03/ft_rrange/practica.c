#include <stdlib.h>

int *ft_rrange(int start, int end)
{

}



































#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int len;
    int step;
    int *arr;
    int i = 0;

    // calcular longitud y dirección
    if (start <= end)
    {
        len = end - start + 1;
        step = -1;          // vamos desde end hacia start
    }
    else
    {
        len = start - end + 1;
        step = 1;           // vamos desde end hacia start (end < start)
    }

    arr = (int *)malloc(sizeof(int) * len);
    if (!arr)
        return (NULL);

    // llenar el array empezando desde end
    while (i < len)
    {
        arr[i] = end;
        end += step;
        i++;
    }

    return (arr);
}
