#include <unistd.h>
char to_lower(char c)
{
    if(c >= 'A' && c <= 'Z')
        c +=32;
    return(c);    
}
char to_upper(char c)
{
    if(c >= 'a' && c <= 'z')
        c -=32;
    return(c);    
}
int is_letter(char c)
{
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
void str_capitalizer(char *str)
{
    char *a = str;
    char prev = ' ';
    while(*a)
    {
        char c = to_lower(*a);

        if(is_letter(c))
            if(prev == ' ' || prev == '\t')
                c = to_upper(c);
        write(1, &c, 1);
        prev = *a;
        a++;
    }

}
int main(int argc, char **argv)
{
    if(argc == 1)
        write(1, "\n", 1);
    else
    {
        int i = 1;

        while(i < argc)
        {
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return(0);
}