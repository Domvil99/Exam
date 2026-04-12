#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *str = argv[1];

        while(*str)
        {
            char tm = *str;
            
            if((tm >= 'a' && tm <= 'm') || (tm >= 'A' && tm <= 'M'))
                tm += 13;
            else if((tm >= 'n' && tm <= 'z') || (tm >= 'N' && tm <= 'Z'))
                tm -= 13;
            write(1, &tm, 1);
            str++;
        }
    }
    
    write(1, "\n", 1);
    return(0);
}