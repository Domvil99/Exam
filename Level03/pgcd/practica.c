#include <stdio.h>
#include <stdlib.h>



































int gcd(int a, int b)
{
    while (b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp; 
    }
    return (a);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int a = atoi(av[1]);
        int b = atoi(av[2]);

        if (a > 0 && b > 0)
            printf("%d\n", gcd(a, b));
        else
            printf("\n");

        return (0);
    }

    printf("\n");
    return (0);
}
