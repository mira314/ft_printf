/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:38:20 by vrandria          #+#    #+#             */
/*   Updated: 2024/03/06 10:39:09 by vrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static  int ft_format(char str, va_list args)
{
    int count;

    count = 0;
    if (str == 'c')
        count += ft_putchar((char) va_arg(args, int));
    else if (str = 's')
        count += ft_putstr((char *) va_arg(args, char *));
    else if (str = 'd' || 'i')
        count += ft_putnbr((int) va_arg(args, int));
    return (count);
}

int ft_printf(const char *str, ...)
{
    int i;
    int count;

    va_list args;
    i = 0;
    count = 0;
    va_start(args, str);
    while (str[i] != 0)
    {
        if (str[i] == '%')
        {
            i++;
            count += ft_format(str[i], args);
            if (count < 0)
                return (-1);
        }
        else
        {
            count += ft_putchar(str[i]);
            if (count < 0)
                return (-1);
        }
        i++;
    }
    va_end(args);
    return (count);
}

