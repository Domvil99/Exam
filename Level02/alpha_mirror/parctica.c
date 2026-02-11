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
        char *p = argv[1];

        while(*p)
        {
            char c = *p;
        
            if(c >= 'a' && c <= 'z')
                c = 'z' - c + 'a';
            if(c >= 'A' && c <= 'Z')
                c = 'Z' - c + 'A';
            write(1, &c, 1);
            p++;
        }
    }write(1, "\n", 1);
}
*/