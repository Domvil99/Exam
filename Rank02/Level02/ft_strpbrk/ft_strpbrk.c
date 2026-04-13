#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    while(*s1)
    {
        const char *tm = s2;
        while(*tm)
        {
            if(*s1 == *tm)
                return((char *) s1);
            tm++;
        }
        s1++;
    }
    return(NULL);
}

/*  int main(void)
{
    char *s1 = "hola mundo";
    char *s2 = "aeiou";
    char *s3 = "xyz";
    char *s4 = "";
    char *s5 = "123456789";

    char *r1 = ft_strpbrk(s1, s2);
    char *r2 = ft_strpbrk(s1, s3);
    char *r3 = ft_strpbrk(s1, s4);
    char *r4 = ft_strpbrk(s5, "57");

    printf("Caso 1: \"%s\" con \"%s\" → %s\n", s1, s2, r1);
    printf("Caso 2: \"%s\" con \"%s\" → %s\n", s1, s3, r2);
    printf("Caso 3: \"%s\" con \"%s\" → %s\n", s1, s4, r3);
    printf("Caso 4: \"%s\" con \"%s\" → %s\n", s5, "57", r4);

    return 0;
}*/