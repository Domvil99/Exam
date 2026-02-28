#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int word = 0;
        char *a = argv[1];
        while(*a)
        {
            if(*a != ' ' && *a != '\t')
            {
                if(word)
                    write(1, " ", 1);

                while(*a && *a != ' ' && *a != '\t')
                    write(1, a++, 1);
                word = 1;
            }
            else
                a++;
        }

    }
    write(1, "\n", 1);
    return(0);
}

































int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int word = 0;
        char *str = argv[1];

            while(*str == ' ' || *str == '\t')
                str++;
            while(*str)
            {   
                if(*str != ' ' && *str != '\t')
                {
                    if(word)
                        write(1, " ", 1);
                    while(*str && (*str != ' ' && *str != '\t'))
                        write(1, str++, 1);
                    word = 1;
                }
                else
                    str++;
            }
    }
    write(1, "\n", 1);
    return (0);
}