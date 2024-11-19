/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:05:40 by dicosta-          #+#    #+#             */
/*   Updated: 2024/11/19 18:26:56 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_format(char specifier, va_list ap)
{
    int counter;

    counter = 0;
    if (specifier == 'i')
        counter = ft_print_digit(va_arg(ap, int));
    if (specifier == 'd')
        counter = ft_print_digit(va_arg(ap, int));
    if (specifier == 's')
        counter = ft_print_str(va_arg(ap, char *));
    if (specifier == 'x')
        counter = ft_print_hex(va_arg(ap, int), LC_HEX);
    if (specifier == 'X')
        counter = ft_print_hex(va_arg(ap, int), HC_HEX);
    if (specifier == 'c')
        counter += ft_print_chr(va_arg(ap, int));
    if (specifier == 'p')
        counter += ft_print_ptr(va_arg(ap, char*));
    return (counter);
}