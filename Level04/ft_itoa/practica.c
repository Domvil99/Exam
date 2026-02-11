#include <stdlib.h>

static int  count_digits(int n)
{
    int count = 0;

    if (n <= 0)
        count++;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}

char    *ft_itoa(int nbr)
{
    long    n = nbr;
    int     len = count_digits(n);
    char    *str = malloc(len + 1);

    if (!str)
        return (NULL);

    str[len] = '\0';

    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }

    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }

    while (n > 0)
    {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }

    return (str);
}
