#include <unistd.h>
int ft_atoi(char *str)
{
    int result = 0;

    while(*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return(result);
}

int is_prime(int z)
{
    int i = 2;

    if(z < 2)
        return(0);

    while(i * i <= z)
    {
        if(z % i == 0)
            return(0);
        i++;
    }
    return(1);
}

void ft_putnbr(int z)
{
    if(z > 9)
        ft_putnbr(z / 10);
    char c = (z % 10) + '0';
    write(1, &c, 1); 
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *str = argv[1];

        while(*str)
        {
            if(*str < '0' || *str > '9')
            {
                write(1, "0\n", 2);
                return(0);
            }
            str++;
        }

        int i = 2;
        int sum = 0;
        int num = ft_atoi(argv[1]);

        while(i <= num)
        {
            if(is_prime(i))
                sum += i;
            i++;
        }
        ft_putnbr(sum);
        write(1, "\n", 1);
        return(0);
        

    }
    write(1, "0\n", 2);
    return(0);
}




































/*
int ft_atoi(char *str)
{
    int result = 0;
    while(*str >= 48 && *str <= 57)
        result = result * 10 + (*str++ - 48);
    return(result);
}

int is_prime(int finder)
{
    int i = 2;
    if(finder < 2)
        return(0);
    while(i * i <= finder)
    {
        if(finder % i == 0)
            return(0); 
        i++;
    }
    return(1);

}
void print(int i)
{
    if(i >= 10)
        print(i / 10);
    char c = (i % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *number = argv[1];
        
        while(*number)
        {
            if(*number < 48 || *number > 57)
            {
                write(1, "0\n", 2);
                return(0);
            }
            number++;
        }
        
        int whole = ft_atoi(argv[1]);
        int sum = 0;
        int i = 2;
        while(i <= whole)
        {
            if(is_prime(i))
                sum += i;
            i++;
        }
        print(sum);
        write(1, "\n", 1);
        return(0);
    }
    write(1, "0\n", 2);
    return(0);
}
*/