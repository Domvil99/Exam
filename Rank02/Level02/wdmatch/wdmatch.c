#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        char *str1 = argv[1];
        char *str2 = argv[2];

        while(*str2)
        {
            if(*str1 == *str2)
                str1++;
            str2++;
        }
        if(!*str1)
        {
            str1 = argv[1];

            while(*str1)
                write(1, str1++, 1);
        }
    }write(1, "\n", 1);
    return(0);
}