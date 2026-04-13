unsigned char	reverse_bits(unsigned char octet)
{
    octet = (octet >> 4) | (octet << 4);
    octet = ((octet & 0xCC) >> 2) | ((octet & 0x33) << 2);
    octet = ((octet & 0xAA) >> 1) | ((octet & 0x55) << 1);
    return(octet);
}

/*  int main(void)
{
    unsigned char a = 38;   // 0010 0110
    unsigned char b = 2;    // 0000 0010
    unsigned char c = 128;  // 1000 0000
    unsigned char d = 255;  // 1111 1111

    unsigned char r;

    r = reverse_bits(a);
    write(1, &r, 1);
    write(1, "\n", 1);

    r = reverse_bits(b);
    write(1, &r, 1);
    write(1, "\n", 1);

    r = reverse_bits(c);
    write(1, &r, 1);
    write(1, "\n", 1);

    r = reverse_bits(d);
    write(1, &r, 1);
    write(1, "\n", 1);

    return 0;
}*/