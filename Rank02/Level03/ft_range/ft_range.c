#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int len;
    int sign;
     
    if(start <= end)
    {
        len = end - start+ 1;
        sign = 1; 
    }
    else
    {
        len = start - end + 1;
        sign = -1; 
    }
    
    int *arr = (int *)malloc(len * sizeof(int));
    if(!arr)
        return(NULL);
    
    int *tmp = arr;
    
    while (len--)
    {
        *tmp = start;
        start += sign;
        tmp++;
    }
    return(arr);
}

/*  int main(void)
{
    int start = -2;
    int end = 3;

    int *arr = ft_range(start, end);
    if (!arr)
        return(1);

    int len;

    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;

    int *tm = arr;
    while (tm < arr + len)
    {
        printf("%d ", *tm);
        tm++;
    }
    printf("\n");
    free(arr);
    return 0;
}/*