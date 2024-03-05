#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != 0)
	{
	count += ft_putchar(s[i]);
		i++;
	}
	return (count);
}