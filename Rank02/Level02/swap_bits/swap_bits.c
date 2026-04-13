unsigned char	swap_bits(unsigned char octet)
{
    return((octet >> 4 ) | (octet << 4));
}

/*  int main(void)
{
    unsigned char a = 0b01000001; // 0x41
    unsigned char b = 0b00010100; // 0x14
    unsigned char c = 0b11110000; // 0xF0
    unsigned char d = 0b00001111; // 0x0F

    unsigned char r;

    r = swap_bits(a);
    write(1, &r, 1);
    write(1, "\n", 1);

    r = swap_bits(b);
    write(1, &r, 1);
    write(1, "\n", 1);

    r = swap_bits(c);
    write(1, &r, 1);
    write(1, "\n", 1);

    r = swap_bits(d);
    write(1, &r, 1);
    write(1, "\n", 1);

    return 0;
}*/