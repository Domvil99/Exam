#include <stdio.h>

unsigned int gcd(unsigned int a, unsigned int b)
{
    while(b)
    {
        unsigned int tm = a % b;
            a = b;
            b = tm;   
    }
    return(a);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    if(a == 0 || b == 0)
        return(0);
    
    unsigned int g = gcd(a, b);

    return((a / g) * b);
}

/*  int main(void)
{
    unsigned int a = 48;
    unsigned int b = 18;

    printf("gcd(%u, %u) = %u\n", a, b, gcd(a, b));
    printf("lcm(%u, %u) = %u\n", a, b, lcm(a, b));

    a = 21;
    b = 6;

    printf("gcd(%u, %u) = %u\n", a, b, gcd(a, b));
    printf("lcm(%u, %u) = %u\n", a, b, lcm(a, b));

    a = 0;
    b = 42;

    printf("gcd(%u, %u) = %u\n", a, b, gcd(a, b));
    printf("lcm(%u, %u) = %u\n", a, b, lcm(a, b));

    return 0;
}*/