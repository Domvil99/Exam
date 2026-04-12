#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {

    }
    write(1, "\n", 1);
    return(0);
}































/*
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *p = argv[1];

            while(*p == 9 || *p == 32)
                p++;
            while((*p != 9 && *p != 32) && *p != '\0')
            {
                write(1, p, 1);
                p++;
            }
    }
    write(1, "\n", 1);
    return(0);
}
*/

/*
#include <unistd.h>

int main(int argc, char **argv)
{
    int i= 0;

    if(argc == 2)
    {
        while(argv[1][i] == 9 || argv[1][i] == 32)
        {
            i++;
        }
        while((argv[1][i] != 9 && argv[1][i] != 32) && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
*/