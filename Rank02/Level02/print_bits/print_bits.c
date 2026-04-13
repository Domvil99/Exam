#include <unistd.h>

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

/*  int main(void)
{
    print_bits(2);
    write(1, "\n", 1);

    print_bits(255);
    write(1, "\n", 1);

    print_bits(128);
    write(1, "\n", 1);

    print_bits(42);
    write(1, "\n", 1);

    return 0;
}*/