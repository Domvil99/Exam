#include <unistd.h>

int ft_atoi(char *s)
{
    int n = 0;

    while (*s >= '0' && *s <= '9')
    {
        n = n * 10 + (*s - '0');
        s++;
    }
    return (n);
}

void    ft_putnbr(int n)
{
    char c;

    if (n > 9)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int n = ft_atoi(av[1]);
        int i = 1;

        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(n);
            write(1, " = ", 3);
            ft_putnbr(i * n);
            write(1, "\n", 1);
            i++;
        }
        return (0);
    }
    write(1, "\n", 1);
    return (0);
}
