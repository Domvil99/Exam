int ft_atoi_base(const char *str, int str_base)
{

}



































int xtoi(char s)
{
    if(s >= '0' && s <= '9')
        return(s - '0');
    else if(s >= 'a' && s <= 'f')
        return(s - 'a' + 10);
    else if(s >= 'A' && s <= 'F')
        return(s - 'A' + 10);
    return(-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int val;
    int sign = 1;
    int result = 0;
    
    if(str_base < 2 || str_base > 16)
        return(0);
    if(*str == '-')
    {
        sign =-1;
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
