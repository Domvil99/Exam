#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

static int  count_digits(long n)
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
    long    num = nbr;
    int     len = count_digits(num);
    char    *str = malloc(len + 1);

    if (!str)
        return (NULL);

    str[len] = '\0';

    if (num == 0)
    {
        str[0] = '0';
        return (str);
    }

    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }

    while (num > 0)
    {
        str[--len] = (num % 10) + '0';
        num /= 10;
    }

    return (str);
}

/*  int main(void)
{
    int tests[] = {
        0,
        5,
        -5,
        12345,
        -12345,
        INT_MAX,
        INT_MIN
    };

    int i = 0;
    int size = sizeof(tests) / sizeof(int);

    while (i < size)
    {
        char *str = ft_itoa(tests[i]);
        if (str)
        {
            printf("ft_itoa(%d) = %s\n", tests[i], str);
            free(str);
        }
        else
            printf("Error: malloc returned NULL\n");

        i++;
    }

    return 0;
}*/