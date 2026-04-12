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

    while (s[len] && !is_sep(s[len]))
        len++;

    w = malloc(len + 1);
    if (!w)
        return (NULL);

    for (int i = 0; i < len; i++)
        w[i] = s[i];
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
                words[i++] = copy_word(s);
                while (*s && !is_sep(*s))
                    s++;
            }
        }
        words[i] = NULL;

        for (int j = wc - 1; j >= 0; j--)
        {
            int k = 0;
            while (words[j][k])
                write(1, &words[j][k++], 1);
            if (j > 0)
                write(1, " ", 1);
            free(words[j]);
        }
        free(words);
    }
    write(1, "\n", 1);
    return (0);
}
