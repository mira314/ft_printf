/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:37:03 by vrandria          #+#    #+#             */
/*   Updated: 2024/03/06 10:37:06 by vrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_FTPRINT_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int ft_printf(const char *, ...);
int	ft_putnbr(int nb);
int	ft_putnbr_u(long nb);
int	ft_putchar(char c);
int	ft_putstr(char *s);

#endif