#include <stdlib.h>

static int  is_sep(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

static int  count_words(char *str)
{
    int count = 0;

    while (*str)
    {
        while (*str && is_sep(*str))
            str++;
        if (*str && !is_sep(*str))
        {
            count++;
            while (*str && !is_sep(*str))
                str++;
        }
    }
    return (count);
}

static char *copy_word(char *str)
{
    int len = 0;
    char *word;

    while (str[len] && !is_sep(str[len]))
        len++;

    word = malloc(len + 1);
    if (!word)
        return (NULL);

    for (int i = 0; i < len; i++)
        word[i] = str[i];
    word[len] = '\0';

    return (word);
}

char    **ft_split(char *str)
{
    int     words = count_words(str);
    char    **tab = malloc((words + 1) * sizeof(char *));
    int     i = 0;

    if (!tab)
        return (NULL);

    while (*str)
    {
        while (*str && is_sep(*str))
            str++;
        if (*str && !is_sep(*str))
        {
            tab[i] = copy_word(str);
            i++;
            while (*str && !is_sep(*str))
                str++;
        }
    }
    tab[i] = NULL;
    return (tab);
}
