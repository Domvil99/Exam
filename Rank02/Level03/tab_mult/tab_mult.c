#include <unistd.h>

int ft_atoi(char *str)
{
    int result = 0;
    while(*str >= '0'&& *str <= '9')
        result = result * 10 + (*str++ - '0');
    return(result);
}

void ft_putnbr(int  n)
{
    if(n > 9)
        ft_putnbr(n / 10);
    char c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int num = ft_atoi(argv[1]);
        int i = 1;

        while(i < 10)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(num);
            write(1, " = ", 3);
            ft_putnbr(i * num);
            write(1, "\n", 1);
            
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}