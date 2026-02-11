#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int n = atoi(argv[1]);
        int i = 2;

        if (n == 1)
        {
            printf("1\n");
            return (0);
        }

        while (i * i <= n)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                n /= i;
                if (n > 1)
                    printf("*");
            }
            else
                i++;
        }

        if (n > 1)
            printf("%d", n);

        printf("\n");
    }
    else
        printf("\n");

    return (0);
}

