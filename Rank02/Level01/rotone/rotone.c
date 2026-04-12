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
    char *p = argv[1];

    if(argc == 2)
    {
        while(*p)
        {
            if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
            {
                if(*p == 'z')
                    *p = 'a';
                else if(*p == 'Z')
                    *p = 'A';
                else
                    *p += 1;
            }
            write(1, p, 1);
            p++;
        }
    }
    write(1, "\n", 1);
}



int main(int argc, char **argv)
{
    char *p = argv[1];

    if(argc == 2)
    {
        while(*p)
        {
            if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
            {
                if(*p == 'z')
                    *p = 'a';
                else if(*p =='Z')
                    *p = 'A';
                else
                *p += 1;
            }
            
            write(1, p, 1);
            p++;
        }
    }
    write(1, "\n", 1);
}*/