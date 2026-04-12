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
            if(*p == '_')
            {
               p++;
               if(*p >= 'a' && *p <= 'z')
               {
                    char l = *p - 32;
                    write(1, &l, 1);
               }
            }
            else
                write(1, p, 1);

            p++;
        }
     write(1, "\n", 1);
}
    */