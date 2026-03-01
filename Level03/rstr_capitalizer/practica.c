#include <unistd.h>



































int is_letter(char c)
{
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
char to_upper(char c)
{
    if(c >= 'a' && c <= 'z')
        c -= 32;
    return(c);
}
char to_lower(char c)
{
    if(c >= 'A' && c <= 'Z')
        c += 32;
    return(c);
}
void rstr_capitalizer( char *str)
{
    int i = 0;

    while(str[i])
    {
        char c = to_lower(str[i]);

        if(is_letter(str[i]))
            if(str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0' )
                c = to_upper(c);

        write(1, &c, 1);
        i++;
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
            rstr_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return(0);
}
