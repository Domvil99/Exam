#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {

    }write(1, "\n", 1);
    return(0);
}




























/*int main(int argc, char **argv)
{
    char *p = argv[1];

    if(argc == 2)
    {   
        while(*p)
        {
            if(*p >= 'a' && *p <= 'm')
                *p += 13;
            else if(*p >= 'n' && *p <= 'z')
                *p -= 13;
            else if(*p >= 'A' && *p <= 'M')
                *p += 13;
            else if(*p >= 'N' && *p <= 'Z')
                *p -= 13;
            write(1, p, 1);
            p++;
        }
    }
    write(1, "\n", 1);
}*/





/*
int main(int argc, char **argv)
{
    char *p = argv[1];

    if(argc == 2)
    {
        while(*p)
        {
            if(*p >= 'a' && *p <= 'z')
            {
                if(*p <= 'm')
                *p += 13;
                else
                *p -= 13;
            }
            if(*p >= 'A' && *p <= 'Z' )
            {
                if(*p <= 'M')
                *p += 13;
                else
                *p -= 13;
            }
            write(1, p, 1);  
            p++;
        }

    }
    write(1, "\n", 1);
    return (0);
}
*/