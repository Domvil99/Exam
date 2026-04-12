#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {

    }write(1, "\n", 1);
    return(0);
}



























/*
int main(int argc, char **argv )
{
   ;

    if(argc == 2)
    {
    
        char *c = argv[1];
        int i;
        while(*c)
        {
            if(*c >= 'a' && *c <= 'z')
                i = *c - 'a' + 1;
            else if(*c >= 'A' && *c <= 'Z')
                i = *c - 'A' + 1;
            else 
                i = 1;
            while(i--)
            write(1, c, 1);
            c++;  
        }
    }
    write(1, "\n", 1);
}
*/




/*
int main(int argc, char **argv)
{
    char *p = argv[1];
    int i;

    if(argc == 2)
    {
        while(*p)
        {
            if(*p >= 'a' && *p <= 'z')
                i = *p - 'a' + 1;
            else if(*p >= 'A' && *p <= 'Z')
                i = *p - 'A' + 1;
            else
                i = 1;
            while(i--)
                write(1, p, 1);
            p++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
*/

/*
int main(int argc, char **argv)
{
    char *p = argv[1];
    int repeat;
    
    if(argc ==2)
    {
        
        while(*p)
        {
            if(*p >= 'a' && *p <= 'z')
            repeat = *p - 'a' + 1;
            else if(*p >= 'A' && *p <= 'Z')
            repeat = *p - 'A' + 1;
            else
                repeat = 1;
            while(repeat--)
            write(1, p, 1);
            p++;
        }
    }write(1, "\n", 1);
    return 0;
}
*/