/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:02:10 by dicosta-          #+#    #+#             */
/*   Updated: 2024/11/19 18:24:05 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char* format, ...)
{
    va_list ap;
    va_start(ap, format);
    int i;
    int print_lng;

    i = 0;
    print_lng = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
            ft_print_format(format[++i], ap);
        else
            print_lng += write(1, &format[i], 1);
        i++;
    }
    va_end(ap);
    return (print_lng);
}

int main(void)
{   
    ft_printf("DIOGO PRINTF\n\n");
    int ft_counter = ft_printf("DECIMAL: %d\nINT: %i\nHEX: %x\nSTRING: %s\nCHAR: %c\n\n", 23, 23, 3000, "Diogo", 'd');
    ft_printf("DIOGO COUNTER: %i\n\n\n", ft_counter);
    printf("ORIGINAL PRINTF\n\n");
    int og_counter = printf("DECIMAL: %d\nINT: %i\nHEX: %x\nSTRING: %s\nCHAR: %c\n\n", 23, 23, 3000, "Diogo", 'd');
    printf("COUNTER: %i\n\n\n", og_counter);
}
