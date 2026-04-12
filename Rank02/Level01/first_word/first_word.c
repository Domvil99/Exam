#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *str = argv[1];

        while(*str == 9 || *str == 32)
                str++;
        while(*str && (*str != 9 && *str != 32))
            write(1, str++, 1);
    }
    write(1, "\n", 1);
    return(0);
}