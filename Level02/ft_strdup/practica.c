#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{

}























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