#include <stdio.h>

int max(int *tab, unsigned int len)
{
    if(len == 0)
        return(0);

    int max = tab[0];
    unsigned int i = 0;

    while(i < len)
    {
        if(tab[i] > max)
            max = tab[i];
        i++;
    }
    return(max);
}

/*  int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {-10, -3, -50, -1};
    int c[] = {42};
    int d[] = {};
    
    printf("max(a) = %d\n", max(a, 5));
    printf("max(b) = %d\n", max(b, 4));
    printf("max(c) = %d\n", max(c, 1));
    printf("max(d) = %d\n", max(d, 0));

    return 0;
}*/