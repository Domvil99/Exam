#include <stdio.h>
#include <string.h>

size_t  ft_strcspn(const char *s, const char *reject)
{

}





















size_t	ft_strcspn(const char *s, const char *reject)
{
    const char *a = s; 
    while(*a)
    {
        const char *f = reject;
        while(*f)
        {
            if(*f == *a)
                return(a - s);
            f++;
        }
        a++;
    }return(a - s);
}
int main(void)
{   
    char a[] = "Camila";
    char f[] = "entregd";
    int result = ft_strcspn(a, f);
    int res = strcspn(a, f);
    printf("%d \n", result);
    printf("res f: %d \n", res);
    return(0);
}
