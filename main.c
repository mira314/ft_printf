#include "ft_printf.h"
#include <stdio.h>

int main()
{
    char str[] = "mirado";
    char a = 'a';
    int nb;
    
    nb = ft_putstr(str);
    
    printf("nb est %d",nb);
}