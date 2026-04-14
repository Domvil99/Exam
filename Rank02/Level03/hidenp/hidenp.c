#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        char *a = argv[1];
        char *b = argv[2];

        while(*a && *b)
        {
            if(*a == *b)
                a++;
            b++;
        }
        if(!*a)
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return(0);
}