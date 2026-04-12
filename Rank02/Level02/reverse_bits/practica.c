unsigned char	reverse_bits(unsigned char octet)
{
    
}



































unsigned char	reverse_bits(unsigned char octet)
{
    octet = (octet >> 4) | (octet << 4);
    octet = (((octet & 0xCC) >> 2 ) | ((octet & 0x33) << 2));
    octet = (((octet & 0xAA) >> 1 ) | ((octet & 0x55) << 1));
    return(octet);

}






/*#include <stdio.h>

unsigned char reverse_bits(unsigned char o)
{
    unsigned char r = 0;
    int i = 0;

    while (i < 8)
    {
        r = (r << 1) | (o & 1);
        o >>= 1;
        i++;
    }
    return r;
}



int main(void)
{   
    char c = 'e';
    char f = reverse_bits(c);

    printf("%d", f);
}


unsigned char reverse_bits(unsigned char o)
{
    o = (o >> 4) | (o << 4);
    o = ((o & 11001100) >> 2) | ((o & 00110011) << 2);
    o = ((o & 10101010) >> 1) | ((o & 01010101) << 1);
    return o;
}
unsigned char reverse_bits(unsigned char octet)
{
    octet = (octet >> 4) | (octet << 4);
    octet = ((octet & 0xCC) >> 2) | ((octet & 0x33) << 2);
    octet = ((octet & 0xAA) >> 1) | ((octet & 0x55) << 1);
    return octet;
}

 // e 0110 0101   0000 0110   0101 0000
*/