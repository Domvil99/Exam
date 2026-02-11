#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while (i--)
	{		 //01100101 //00110010
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}
int main(void)
{
    char c ='e';
    print_bits(c);
    write(1, "\n", 1);
}