unsigned int lcm(unsigned int a, unsigned int b)
{
    
}



































unsigned int    gcd(unsigned int a, unsigned int b)
{
    while (b != 0)
    {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
    }
    return (a);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int g;

    if (a == 0 || b == 0)  
        return (0);

    g = gcd(a, b);
    return (a / g * b);
}
// LCM(x, y) =  x * y 
            // HCF(x, y)





//
unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n;

    if (a == 0 || b == 0)
        return (0);

    if (a > b)
        n = a;
    else
        n = b;

    while (1)
    {
        if (n % a == 0 && n % b == 0)
            return (n);
        n++;
    }
}

