#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *str = argv[1];

        while(*str)
        {
            int i = 1;
            
            if(*str >= 'a' && *str <= 'z')
                i = *str - 'a' + 1;
            else if(*str >= 'A' && *str <= 'Z')
                i = *str - 'A' + 1;
            while(i--)
                write(1, str, 1);
            str++;
        }
    }
    
    write(1, "\n", 1);
    return(0);
}