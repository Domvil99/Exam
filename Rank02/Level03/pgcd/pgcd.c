#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    while(b)
    {
        int tm = a % b;
        a = b;
        b = tm;
    }
    return(a);
}
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);

        if(a > 0 && b > 0)
            printf("%d\n", gcd(a, b));
        else
            printf("\n");
        return(0);
    }
    else
        printf("\n");
    return(0);
}
