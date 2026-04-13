#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *str = argv[1];

        while(*str)
        {
            char tm = *str;

            if(tm >= 'a' && tm <= 'z')
                tm = 'z' - tm + 'a';
            else if(tm >= 'A' && tm <= 'Z')
                tm = 'Z' - tm + 'A';
            write(1, &tm, 1);
            str++;
        }
    }
    write(1, "\n", 1);
    return(0);
}