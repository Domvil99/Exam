#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    if(!src)
        return(NULL);
    size_t i = 0;
    while(src[i])
        i++;
    char *cpy = malloc((i + 1) * sizeof(char));
    if(!cpy)
        return(NULL);
    char *tm = cpy;
    while((*tm++ = *src++));
    return(cpy);
}

/*  int main(void)
{
    char *s1 = "Hola mundo";
    char *s2 = "";
    char *s3 = "42 Network";

    char *c1 = ft_strdup(s1);
    char *c2 = ft_strdup(s2);
    char *c3 = ft_strdup(s3);

    printf("Original: \"%s\" | Copia: \"%s\"\n", s1, c1);
    printf("Original: \"%s\" | Copia: \"%s\"\n", s2, c2);
    printf("Original: \"%s\" | Copia: \"%s\"\n", s3, c3);

    free(c1);
    free(c2);
    free(c3);

    return 0;
}*/






















/*
char    *ft_strdup(char *src)
{   
    if(!src)
        return(NULL);
    char *tmp = src;
    size_t i = 0;
    while(src[i])
        i++;
    char *c = malloc((i + 1) * sizeof(char));
    if(!c)
        return(NULL);
    char *l = c;
    while((*c++ = *tmp++));
    return(l);

}




char    *ft_strdup(char *src)
{
    char *p = src;
    size_t i = 0;

    while(*p)
        p++;
    i = p - src;

    char *n = malloc(i + 1);
    
    if(!n)
        return(NULL);
    
    char *c = n;
    
    while(*src)
        *n++ = *src++;
    
    *n = '\0';
    return(c);
    
}

int main(void)
{
    char *v = "hola";
    char *n = strdup(v);
    char *pj = ft_strdup(v);

    printf("VCadena: %s DirecciónV: %p \n", v, v);
    printf("NCadena: %s DirecciónN: %p \n", n, n);
    printf("CadenaV: %s DirecciónN: %p \n", v, n);
    printf("CadenaN: %s DirecciónV: %p \n\n", n, v);

    printf("PJcadena: %s PJdirección: %p \n", pj, pj);
}
*/