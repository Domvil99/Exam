#include <unistd.h>

int is_letter(char s)
{
   return((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'));
}

char to_upper(char tm)
{
    if(tm >= 'a' && tm <= 'z')
        tm -= 32;
    return(tm);
}

char to_lower(char s)
{
    if(s >= 'A' && s <= 'Z')
        s += 32;
    return(s);
}

void rstr_capitalizer(char *str)
{
    char *s = str;

    while(*s)
    {
        char tm = to_lower(*s);

        if(is_letter(*s))
        {
            if(*(s + 1) == ' ' || *(s + 1) == '\t' || *(s + 1) == '\0')
                tm = to_upper(tm);
        }

        write(1, &tm, 1);
        s++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        write(1, "\n", 1);
        return(0);
    }

    char **str = argv + 1;

    while(*str)
    {
        rstr_capitalizer(*str++);
        write(1, "\n", 1);
    }
    return(0);
}