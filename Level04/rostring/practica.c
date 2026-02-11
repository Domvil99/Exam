#include <unistd.h>
#include <stdlib.h>

static int  is_sep(char c)
{
    return (c == ' ' || c == '\t');
}

static void putstr(char *s)
{
    while (*s)
        write(1, s++, 1);
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        char *s = av[1];
        char **words;
        int wc = 0;
        int i = 0;

        /* Contar palabras */
        for (int k = 0; s[k]; )
        {
            while (s[k] && is_sep(s[k]))
                k++;
            if (s[k] && !is_sep(s[k]))
            {
                wc++;
                while (s[k] && !is_sep(s[k]))
                    k++;
            }
        }

        words = malloc((wc + 1) * sizeof(char *));
        if (!words)
            return (0);

        /* Copiar palabras */
        while (*s)
        {
            while (*s && is_sep(*s))
                s++;
            if (*s && !is_sep(*s))
            {
                int len = 0;
                while (s[len] && !is_sep(s[len]))
                    len++;

                words[i] = malloc(len + 1);
                for (int j = 0; j < len; j++)
                    words[i][j] = s[j];
                words[i][len] = '\0';
                i++;

                s += len;
            }
        }
        words[i] = NULL;

        /* Imprimir desde la segunda palabra hasta la última */
        for (int j = 1; j < wc; j++)
        {
            putstr(words[j]);
            write(1, " ", 1);
        }

        /* Imprimir la primera palabra al final */
        if (wc > 0)
            putstr(words[0]);

        /* Liberar memoria */
        for (int j = 0; j < wc; j++)
            free(words[j]);
        free(words);
    }
    write(1, "\n", 1);
    return (0);
}
