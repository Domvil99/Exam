#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{

 
}




























int ft_strlen(char *str)
{
    char *l = str;

    while(*l)
        l++;
    return(l - str);
 
}

int	ft_strlen(char *str)
{
    int h = 0;
    while(*str++)
        h++;
    return h;

}
int main(void)
{   
    char *g= "hola pescaado"; 
    int f = ft_strlen(g);
  
    printf("%d\n", f);
    write(1, "\n\n", 2);

    char buf[12];
    int i = 0;

    if (f == 0)
        buf[i++] = '0';
    else
    {
        int n = f;
        char tmp[12];
        int j = 0;

        while (n > 0)
        {
            tmp[j++] = '0' + (n % 10);
            n /= 10;
        }
        while (j > 0)
            buf[i++] = tmp[--j];
    }

    write(1, buf, i);
    write(1, "\n\n\n", 3);
}