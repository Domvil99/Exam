



































#include <unistd.h>
int ft_atoi(char *str)
{
    int result = 0;
    while(*str >= '0'&& *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return(result);
}
void ft_putnbr(int n)
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
        int a = 1;
        int b = ft_atoi(argv[1]);

        while(a <= 9)
        {
            ft_putnbr(a);
            write(1, " x ", 3);
            ft_putnbr(b);
            write(1, " = ", 3);
            ft_putnbr(a * b);
            write(1, "\n", 1);
            a++;            
        }
        return(0);
    }
    write(1, "\n", 1);
    return(0);
}