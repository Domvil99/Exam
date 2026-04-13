#include <unistd.h>

int finder(char *str, char current, char *len)
{
    while(str < len)
    {
        if(*str == current)
            return(1);
        str++;
    }
    return(0);
}
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        char *str1 = argv[1];

        while(*str1)
        {
            if(!finder(argv[1], *str1, str1))
                write(1, str1, 1);
            str1++;
        }

        char *str2 = argv[2];

        while(*str2)
        {
            if(!finder(argv[1], *str2, str1) && (!finder(argv[2], *str2, str2)))
                write(1, str2, 1);
            str2++;
        }
    }
    write(1, "\n", 1);
    return(0);
}