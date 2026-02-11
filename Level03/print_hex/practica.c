#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {

    }
    write(1, "\n", 1);
    return(0);
}


































int ft_atoi(char *i)
{
    int result = 0;

    while(*i >= '0' && *i <= '9')
    {
        result = result * 10 + (*i - '0');
        i++;
    }
    return(result);
}
void print_hex(unsigned int a)
{
    char *l = "0123456789abcdef";

    if(a >= 16)
        print_hex(a / 16);
    write(1, &l[a % 16], 1);

}
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int a = ft_atoi(argv[1]);
        print_hex(a);
    }
    write(1, "\n", 1);
    return(0);
}
