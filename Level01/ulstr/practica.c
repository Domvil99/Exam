#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
    
    }
}


























/*
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *p = argv[1];

        while(*p)
        {
            if(*p >= 'a' && *p <= 'z')
                *p -= 32;
            else if(*p >= 'A' && *p <= 'Z')
                *p += 32;
            write(1, p, 1);
            p++;
            
        }
    }write(1, "\n", 1);
}
*/



/*
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *p = argv[1];

        while(*p)
        {
            if(*p >= 'a' && *p <= 'z')
                *p -= 32;
            else if(*p >= 'A' && *p <= 'Z')
                *p += 32;
            write(1, p, 1);
            p++;
        }
    }write(1, "\n", 1);
}
*/