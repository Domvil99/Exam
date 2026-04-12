#include <stdio.h>

void    ft_swap(int *a, int *b)
{

}































void	ft_swap(int *a, int *b)
{
    int tmp = *a;
    
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int a = 1234;
    int b = 5678;
    ft_swap(&a, &b);
    printf("a=%d\n", a);
    printf("%d\n", b);
}



/*
void ft_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(void)
{ 
    int x = 1;
    int y = 9; 
    ft_swap(&x, &y);
    char c1 = x + '0';
    char c2 = y + '0';
    write(1, &c1, 1);
    write(1, &c2, 1); 
    return (0);
}
*/