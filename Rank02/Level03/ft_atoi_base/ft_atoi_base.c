#include <stdio.h>

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

/*  int main(void)
{
    printf("Pruebas de ft_atoi_base:\n\n");

    // Base 10
    printf("ft_atoi_base(\"123\", 10) = %d\n", ft_atoi_base("123", 10));
    printf("ft_atoi_base(\"-456\", 10) = %d\n", ft_atoi_base("-456", 10));

    // Base 2
    printf("ft_atoi_base(\"1011\", 2) = %d\n", ft_atoi_base("1011", 2)); // 11

    // Base 8
    printf("ft_atoi_base(\"17\", 8) = %d\n", ft_atoi_base("17", 8)); // 15

    // Base 16
    printf("ft_atoi_base(\"FF\", 16) = %d\n", ft_atoi_base("FF", 16)); // 255
    printf("ft_atoi_base(\"a3\", 16) = %d\n", ft_atoi_base("a3", 16)); // 163
    printf("ft_atoi_base(\"-B4\", 16) = %d\n", ft_atoi_base("-B4", 16)); // -180

    // Caso inválido
    printf("ft_atoi_base(\"1G\", 16) = %d\n", ft_atoi_base("1G", 16)); // G no existe → se detiene

    // Base fuera de rango
    printf("ft_atoi_base(\"123\", 1) = %d\n", ft_atoi_base("123", 1)); // 0

    return 0;
}*/