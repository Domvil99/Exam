#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *str = argv[1];

        while(*str)
        {
            if(*str == '_')
            {
                str++;
                if(*str >= 'a' && *str <= 'z')
                {
                    char tm = *str - 32;
                    write(1, &tm, 1);
                } 
            }
            else
                write(1, str, 1);
            str++;
        }
    }
    write(1, "\n", 1); 
    return(0);
}