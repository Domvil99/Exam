#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *end = argv[1];

        while(*end)
            end++;
        end--;
        while(*end == ' ' || *end == '\t')
            end--;
        if(end < argv[1])
            return(1);
        char *start = end;
        while(start >= argv[1] && (*start != ' ' && *start != '\t'))
            start--;
        start++;
        while(start <= end)
            write(1, start++, 1);
    }
    write(1, "\n", 1);
    return(0);
} 