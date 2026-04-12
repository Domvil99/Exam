#include <unistd.h>

void    print_bits(unsigned char octet)
{

}


































void    print_bits(unsigned char octet)
{
    int i = 7;
    while(0 <= i)
    {
        if(octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }

}

int main(void)
{
    char c ='7';
    print_bits(c);
    write(1, "\n", 1);
    
    char d ='6';
    print_bits(d);
    write(1, "\n", 1);

    char r ='5';
    print_bits(r);
    write(1, "\n", 1);
    
    char t ='4';
    print_bits(t);
    write(1, "\n", 1);
    
    char y ='3';
    print_bits(y);
    write(1, "\n", 1);
    
    char u ='2';
    print_bits(u);
    write(1, "\n", 1);
    
    char h ='1';
    print_bits(h);
    write(1, "\n", 1);
    
    char n ='0';
    print_bits(n);
    write(1, "\n", 1);

    char m ='e';
    print_bits(m);
    write(1, "\n", 1);
}