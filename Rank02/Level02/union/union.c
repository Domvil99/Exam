#include <unistd.h>

int finder(char *start1, char *start2, char current)
{
    while(start2 < current)
    {
        if()
    }
}
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        char *str1 = argv[1];

        while(*str1)
        {
            if(!finder(argv[1], str))
            {
            }    
        }
        
      /*  char *str2 = argv[2];

        while(*str2)
        {
            if((!finde(argv[1], argv[2], str1)) && (!finde(argv[1], argv[2], str2)))
        }
        */
    }write(1, "\n", 1);
    return(0);
}
































/*
int ya_esta(char *a, char b, char *limit)
{
    
    
    while(a < limit)
    {
        if(*a == b)
            return(1);
        a++;
    }
    return(0);

}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        char *p = argv[1];
        char *j = argv[2];
        

        while(*p)
        {
            if(!ya_esta(argv[1], *p, p))
                write(1, p, 1);
            p++;
        }
        while(*j)
        {
            if(!ya_esta(argv[1], *j, p) && !ya_esta(argv[2], *j, j))
                write(1, j, 1);
            j++;
        }
    }
    write(1, "\n", 1);
}
*/