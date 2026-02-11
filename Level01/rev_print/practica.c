#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {

    }write(1, "\n", 1);
    return(0);
}




























/*
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        
        while(argv[1][i])
            i++;
        while(i--)
            write(1, &argv[1][i], 1);

    }write(1, "\n", 1);
}*/




/*
int main(int argc, char **argv)
{
    char *p = argv[1];

    if(argc == 2)
    {
        while(*p)
            p++;
        p--;
        while(p >= argv[1])
        {
            write(1, p, 1);
            p--;
        }
    }
    write(1, "\n", 1);
}
    */