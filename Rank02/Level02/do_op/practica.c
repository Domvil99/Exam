#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[3]);
        char op = argv[2][0];
        
        if(op == '+')
           return(printf("%d\n", (a + b)));
        else if(op == '-')
            return(printf("%d\n", (a - b)));
        else if(op == '*')
            return(printf("%d\n", (a * b)));
        else if(op == '/')
            return(printf("%d\n", (a / b)));
        else if(op == '%')
            return(printf("%d\n", (a % b)));

    }write(1, "\n", 1);
    return(0);
}

























/*
#include <unistd.h>
#include <stdio.h>

void print(int n)
{
     char c;
     long nb = n;

    if(nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }

    if(nb >= 10)
        print(nb / 10);
    c =(nb % 10) + '0';
    write(1, &c, 1);
}

int atoi(const char *str)
{
    int sign = 1;
    int result = 0;

    while(*str == ' ' || *str >= 9 && *str <= 13)
        str++;
    if(*str == '-' || *str == '+')
    {
        if(*str == '-')
            sign = -1;
        str++;
    }
    while(*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return(result * sign);
}

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[3]);
        int result = 0;
        char op = argv[2][0];
        
        if(op == '-')
        { 
            printf("f %d\n", (a - b));
            result = (a - b);
        }
        else if(op == '+')
        {   
            printf("f %d\n", (a + b));
            result = (a + b);
        }
        else if(op == '*')
        {
            printf("f %d\n", (a * b));
            result = (a * b);
        }
        else if(op == '/')
        {
            printf("f %d\n", (a / b));
            result = (a / b);
        }
        else if(op == '%')
        {
            printf("f %d\n", (a % b));
            result = (a % b);
        }
        
        print(result);
    }
    write(1, "\n", 1);
}
*/
