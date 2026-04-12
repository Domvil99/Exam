#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp = *a;
    
    *a = *b;
    *b = tmp;
}

/*  int main(void)
{
    int a = 33;
    int b = 11;
    
    printf("a inicial = %d\nb inicial = %d\n", a, b);
    ft_swap(&a, &b);
    printf("a final = %d\nb final = %d\n", a, b);
    return(0);
}*/