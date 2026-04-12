#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 4 && !argv[2][1] && !argv[3][1])
    {
        char *str = argv[1]; 

        while(*str)
        {
            char tm = *str;
            
            if(tm == argv[2][0])
                write(1, &argv[3][0], 1);
            else
                write(1, &tm , 1);
            str++;
        
        }
    }write(1, "\n", 1);
    return(0);
}