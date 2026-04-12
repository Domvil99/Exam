#include <unistd.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int neg = 1;
	int res = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);
}



void ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	char c = nb % 10 + '0';
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int nbr;
    int i = 1;

    if (argc == 2)
    {
        nbr = ft_atoi(argv[1]);
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nbr);
            write(1, " = ", 3);
            ft_putnbr(i * nbr);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}