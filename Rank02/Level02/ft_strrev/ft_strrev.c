#include <stdio.h>

char *ft_strrev(char *str)
{
    if(!str)
        return(NULL);        
    char *end = str;
    char *start = str;

    while(*end)
        end++;
    end--;
    while(end > start)
    {
        char tm = *start;
        *start = *end;
        *end = tm;
        start++;
        end--;
    }
    return(str);
}

/*int main(void)
{
    char s1[] = "hola";
    char s2[] = "123456";
    char s3[] = "a";
    char s4[] = "";
    char s5[] = "anitalavalatina";

    printf("Original: 'hola' -> '%s'\n", ft_strrev(s1));
    printf("Original: '123456' -> '%s'\n", ft_strrev(s2));
    printf("Original: 'a' -> '%s'\n", ft_strrev(s3));
    printf("Original: '' -> '%s'\n", ft_strrev(s4));
    printf("Original: 'anitalavalatina' -> '%s'\n", ft_strrev(s5));

    return 0;
}*/