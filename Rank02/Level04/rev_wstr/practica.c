#include <unistd.h>
#include <stdlib.h>

static int  is_sep(char c)
{
    return (c == ' ' || c == '\t');
}

static int  count_words(char *s)
{
    int count = 0;

    while (*s)
    {
        while (*s && is_sep(*s))
            s++;

        if (*s && !is_sep(*s))
        {
            count++;
            while (*s && !is_sep(*s))
                s++;
        }
    }
    return (count);
}

static char *copy_word(char *s)
{
    int len = 0;
    char *w;
    int i = 0;

    while (s[len] && !is_sep(s[len]))
        len++;

    w = malloc(len + 1);
    if (!w)
        return (NULL);

    while (i < len)
    {
        w[i] = s[i];
        i++;
    }
    w[len] = '\0';
    return (w);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        char **words;
        int wc = count_words(av[1]);
        int i = 0;
        char *s = av[1];

        words = malloc((wc + 1) * sizeof(char *));
        if (!words)
            return (0);

        while (*s)
        {
            while (*s && is_sep(*s))
                s++;

            if (*s && !is_sep(*s))
            {
                words[i] = copy_word(s);
                i++;

                while (*s && !is_sep(*s))
                    s++;
            }
        }
        words[i] = NULL;

        // imprimir en orden inverso
        i = wc - 1;
        while (i >= 0)
        {
            int k = 0;
            while (words[i][k])
            {
                write(1, &words[i][k], 1);
                k++;
            }
            if (i > 0)
                write(1, " ", 1);

            free(words[i]);
            i--;
        }
        free(words);
    }

    write(1, "\n", 1);
    return (0);
}
