#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    return(n != 0 && (n & (n - 1)) == 0);
}

/* 

    //Another way to do it    
int	    is_power_of_2(unsigned int n)
{
    if(n == 0)
        return(0);
    while(n % 2 == 0)
        n /= 2;
    return(n == 1);
}

int main(void)
{
    int a = 1;
    int b = 2;
    int c = 12;
    int d = 256;

    int f = is_power_of_2(a);
    int g = is_power_of_2(b);
    int h = is_power_of_2(a);
    int i = is_power_of_2(c);
    int j = is_power_of_2(d);

    printf("%d\n", f);
    printf("%d\n", g);
    printf("%d\n", h);
    printf("%d\n", i);
    printf("%d\n", j);
}*/