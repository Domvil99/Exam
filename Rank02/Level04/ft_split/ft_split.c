#include <stdlib.h>
int search(char s)
{
    return(s == ' ' || s == '\t' || s == '\0');
}
int count_words(char *str)
{
    int count = 0;
    while(*str)
    {
        while(*str && search(*str))
            str++;
        if(*str && !search(*str))
        {
            count++;
            if()
        }
    }
    
} 
char    **ft_split(char *str)
{   
    int len = count(str); 
    char **tab = malloc
    while(*str)
    {
        while(*str && search(*str))
            str++;
        if(*str && !search(*str))
        {
            int i = 0;
        }
    }
}
























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
    int i = 0;

    while (str[len] && !is_sep(str[len]))
        len++;

    word = malloc(len + 1);
    if (!word)
        return (NULL);
    
    while(i < len)
    {
        word[i] = str[i];
        i++;
    }
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
