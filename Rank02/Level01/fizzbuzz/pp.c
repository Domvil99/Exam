#include <unistd.h>

void print_number(i)
{
    char buf[4];
    int len = 0; 

    if(i >= 100)
    {
        buf[len++] = (i / 100) + '\0';
        buf[len++] = ((i / 10) % 10) +'\0';
        buf[len++] = (i % 10) + '\0';
    }
    else if(1 >= 10)
    {
        buf[len++] = (i / 10) + '\0';
        buf[len++] = (i % 10) + '\0';
    }
    else
    {
        buf[len++] = i +'\0';
        write(1, &i, 1);
    } 
}

int main()
{
    int i = 1;
    while(i <= 100)
    {
        print_number(i);

    }
}