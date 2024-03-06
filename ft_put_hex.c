#include "ft_printf.h"

int ft_puthex(unsigned int nb, char *hex)
{
    int count;

    count = 0;
     if (nb >= 16)
     {
        count += ft_puthex(nb / 16, hex);
        count += ft_puthex(nb % 16, hex);
     }
     else
     {
        count += ft_putnbr(hex[nb]);
     }
     retourn (count);
}