#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *end = argv[1];

        while(*end)
            end++;
        end--;
        while(argv[1] <= end)
            write(1, end--, 1);
    }

    write(1, "\n", 1);
    return(0);
}