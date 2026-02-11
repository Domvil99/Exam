#include <unistd.h>

int is_letter(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

void rstr_capitalizer(char *s)
{
    int i = 0;

    while (s[i])
    {
        char c = s[i];

        if (is_letter(c))
        {
            c = to_lower(c);

            if (!is_letter(s[i + 1]))   // última letra de la palabra
                c = to_upper(c);
        }

        write(1, &c, 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 1;
        while (i < ac)
        {
            rstr_capitalizer(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);

    return (0);
}




#include <unistd.h>

int is_letter(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

void process(char *s)
{
    int i = 0;

    while (s[i])
    {
        s[i] = to_lower(s[i]);

        if (is_letter(s[i]) && (!is_letter(s[i + 1])))
            s[i] = to_upper(s[i]);

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
*/
