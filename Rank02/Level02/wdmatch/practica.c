#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {

    }write(1, "\n", 1);
    return(0);
}






























int main(int argc, char **argv)
{
    if(argc == 3)
    {
        char *s1 = argv[1];
        char *s2 = argv[2];
       
            while(*s1 && *s2)
            {
                if(*s1 == *s2)
                    s1++;
                s2++;
            }
            if(*s1 == '\0')
            { 
                int i = 0;
                while(argv[1][i])
                {
                    write(1, &argv[1][i], 1);
                    i++;
                }
            }
    }write(1, "\n", 1);
    return(0);
}
