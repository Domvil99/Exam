#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return(*s1 - *s2);
}

/*  int main(void)
{
    printf("%d\n", ft_strcmp("hola", "hola"));
    printf("%d\n", ft_strcmp("hola", "holb"));
    printf("%d\n", ft_strcmp("holb", "hola"));
    printf("%d\n", ft_strcmp("hola", "holaaa"));
    printf("%d\n", ft_strcmp("holaaa", "hola"));
    printf("%d\n", ft_strcmp("", ""));
    printf("%d\n", ft_strcmp("", "a"));
    printf("%d\n", ft_strcmp("a", ""));

    return 0;
}*/