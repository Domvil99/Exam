#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    const char *a = s;
    
    while(*a)
    {
        const char *b = reject;
        
        while(*b)
        {
            if(*a == *b)
                return(a - s);
            b++;
        } 
        a++;
    }
    return(a - s);
}

/*  int main(void)
{
    printf("%zu\n", ft_strcspn("hola mundo", " "));
    printf("%zu\n", ft_strcspn("abcdef", "x"));
    printf("%zu\n", ft_strcspn("abcdef", "d"));
    printf("%zu\n", ft_strcspn("123456", "456"));
    printf("%zu\n", ft_strcspn("no-match", "XYZ"));
    printf("%zu\n", ft_strcspn("", "abc"));
    printf("%zu\n", ft_strcspn("test", ""));
    printf("%zu\n", ft_strcspn("42Network", "Nw"));

    return 0;
}*/