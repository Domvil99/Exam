#include <unistd.h>

int is_letter(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char    to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

char    to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

void    process(char *s)
{
    int i = 0;
    int new_word = 1;

    while (s[i])
    {
        if (is_letter(s[i]))
        {
            if (new_word)
                s[i] = to_upper(s[i]);
            else
                s[i] = to_lower(s[i]);
            new_word = 0;
        }
        else
            new_word = 1;

        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 1;

    if (ac > 1)
    {
        while (i < ac)
        {
            process(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);

    return (0);
}
