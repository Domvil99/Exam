#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {

    }write(1, "\n", 1);
    return(0);
}




























/*
int ya_esta(char *inicio, char  *actual)
{
    while(inicio < actual)
    {   
        if(*inicio == *actual)
            return(1);
        inicio++;

    }return(0);
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        char *p = argv[1];
        while(*p)
        {       
            if(!ya_esta(argv[1], p))
            {
                char *f = argv[2];

                while(*f)
                {
                    if(*f == *p)
                       { write(1, p, 1);
                        break;}
                    f++;
                }

            }p++;
        }
    }write(1, "\n", 1);
}
*/