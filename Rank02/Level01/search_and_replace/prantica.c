#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        
    }write(1, "\n", 1);
    return(0);
}

  























/*
#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 4 && !argv[2][1] && !argv[3][1])
    {
        char *p = argv[1];
        while(*p)
        {
            if(*p == argv[2][0] )
                write(1, &argv[3][0], 1);
            else
                write(1, p, 1);
            p++;
        }
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        int i = 0;
        while(argv[1][i])
        {
            if(argv[1][i] == argv[2][0])
                argv[1][i] = argv[3][0];
            write(1, &argv[1][i], 1);
            i++;

        }
    }write(1, "\n", 1);
}    

*/