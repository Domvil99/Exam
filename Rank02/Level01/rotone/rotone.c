#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *str = argv[1];

        while(*str)
        {
            char tm = *str;

            if((tm >= 'a' && tm <= 'z') || (tm >= 'A' && tm <= 'Z'))
            {
                if(tm == 'z')
                    tm = 'a';
                else if(tm == 'Z')
                    tm = 'A';
                else
                    tm += 1;
            }
            write(1, &tm, 1);
            str++;
        }
    }
    write(1, "\n", 1);
    return(0);
}