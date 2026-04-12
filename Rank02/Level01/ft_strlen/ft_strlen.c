#include <stdio.h>

int ft_strlen(char *str)
{
        char *end = str;

        while(*end)
            end++;
        return(end - str);
}
/*  int main(void)
{
    char *str = "Hola Jacobo";
    int lenght = ft_strlen(str);

    printf("%d\n", lenght);
    return(0);
}*/