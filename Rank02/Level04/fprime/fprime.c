#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int num = atoi(argv[1]);
        int i = 2;

        if (num == 1)
        {
            printf("1\n");
            return (0);
        }

        while (i * i <= num)
        {
            if (num % i == 0)
            {
                printf("%d", i);
                num /= i;
                if (num > 1)
                    printf("*");
            }
            else
                i++;
        }

        if (num > 1)
            printf("%d", num);

        printf("\n");
    }
    else
        printf("\n");

    return (0);
}

