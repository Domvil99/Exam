#include <stdio.h>

int max(int *tab, unsigned int len)
{

}
































int		max(int* tab, unsigned int len)
{
    unsigned int i = 0;

    if(len == 0)
        return(0);
    
    int max = tab[0];
    
    while(i < len)
    {
        if(tab[i] > max)
            max = tab[i];
        i++;
    }
    return(max);

}

int main(void)
{
    int f[] = {1, 2, 4, 28, 5, 6};
    int l = max(f, 6);
    printf("%d", l);
    return(0);

}