#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
    int len;
    int sign;

    if(start >= end)
    {
        len = start - end + 1;
        sign = 1;
    }
    else 
    {
        len = end - start + 1;
        sign = -1; 
    }

    int *arr = (int *)malloc(len * sizeof(int));
    if(!arr)
        return(NULL);
    
    int *tmp = arr;

    while (len--)
    {
        *tmp = end;
        end += sign;
        tmp++;
    }
    return(arr);
}

/*  int main(void)
{
    int start = 4;
    int end = -5;

    int *arr = ft_rrange(start, end);
    if(!arr)
        return(1);
    
    int len;
    
    if(start >= end)
        len = start - end + 1;
    else
        len = end - start + 1;
    
    int *tm = arr;
    while (tm < arr + len)
    {
        printf("%d ", *tm);
        tm++;
    }
    printf("\n");
    free(arr);
    return(0);
}/*