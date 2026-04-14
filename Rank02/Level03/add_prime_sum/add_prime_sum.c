#include <unistd.h>

int ft_atoi(char *str)
{
    int result = 0;

    while(*str >= '0' && *str <= '9')
        result = result * 10 + (*str++ - '0');
    return(result);  
}
int checker(int finder)
{
    int i = 2;

    while(i * i <= finder)
    {
        if(finder % i == 0)
            return(0);
        i++;
    }
    return(1);
}

void printer(int sum)
{
    if(sum > 9)
        printer(sum / 10);
    char c = (sum % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *str = argv[1];

        while(*str)
        {
            if(*str < 48 || *str > 57)
            {
                write(1, "0\n", 2);
                return(0);
            }
            str++;
        }

        int number = ft_atoi(argv[1]);
        int prim = 2;
        int sum = 0;

        while(prim <= number)
        {
            if(checker(prim))
              sum += prim;
            prim++;              
        }
        printer(sum);
        write(1, "\n", 1);
        return(0);
    }
    else
        write(1, "0\n", 2);
    return(0);
}