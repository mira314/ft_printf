#include "ft_printf.h"
#include <stdio.h>


int main()
{
    char str[] = "mirado";
    
    unsigned int nb;
    
    nb = -545215584;
   // nb = ft_putnbr(-2147483648);
    
    printf("l'original %X %u %% \n",nb, nb);
    ft_printf("copy	   %X %u %% \n",nb, nb);
}