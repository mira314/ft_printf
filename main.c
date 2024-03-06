#include "ft_printf.h"
#include <stdio.h>


int main()
{
    char str[] = "mirado";
    
    int nb;
    
   // nb = ft_putnbr(-2147483648);
    
    printf(" l'original %c \n",'a');
    nb  = ft_printf("copy %c \n",'a');
}