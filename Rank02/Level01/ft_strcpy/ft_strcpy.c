#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    char *tmp = s1;

    while((*tmp++ = *s2++));
    return(s1);

}

/*  int main(void)
{
    char dest[50];
    char src[] = "Hola mundo";

    ft_strcpy(dest, src);

    int i = 0;
    while (dest[i])
        write(1, &dest[i++], 1);
    write(1, "\n", 1);

    return 0;
}*/