int xtoi(char val)
{
    if(val >= '0' && val <= '9')
        return(val - '0');
    else if(val >= 'a' && val <= 'f')
        return(val - 'a' + 10);
    else if(val >= 'A' && val <= 'F')
        return(val - 'A' + 10);
    return(-1);
}
int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int val;

    if(str_base < 2 || str_base > 16)
        return(0);
    if(*str == '-')
    {
        sign = -1;
        str++;
    }
    while(*str)
    {
        val = xtoi(*str);

        if(val < 0 || val >= str_base)
            break;
        result = result * str_base + val;
        str++;
    }
    return(result * sign);
}