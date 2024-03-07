/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:52:58 by vrandria          #+#    #+#             */
/*   Updated: 2024/03/07 10:53:24 by vrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int ft_putptr(uintptr_t ptr)
{
    int     count;
    char    *hexadec;

    hexadec = "0123456789abcdef";
    count = 0;
    if (ptr >= 16)
    {
        count += ft_putptr(ptr / 16);
        count += ft_putptr(ptr % 16);
    }
    else
        count += ft_putchar(hexadec[ptr]);
    return (count);
}

int ft_print_ptr(uintptr_t ptr)
{
    int count;

    count = 0;
    count += ft_putstr("0x");
    if (count < 0)
        return (-1);
    count += ft_putptr(ptr);
    return (count);
}