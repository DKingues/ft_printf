/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:02:10 by dicosta-          #+#    #+#             */
/*   Updated: 2024/11/17 19:33:20 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
            ft_printf_format(format[++i], ap);
        else
            print_lng += write(1, &format[i], 1);
        i++;
    }
    va_end(ap);
    return (print_lng);
}

int main(void)
{
    ft_printf("HI IM Laura IM 23 YEARS OLD\n");
    printf("HI IM Laura IM 23 YEARS OLD\n");
    ft_printf("HI IM %s IM %d YEARS OLD\n", "Laura", 23);
    printf("HI IM %s IM %d YEARS OLD\n", "Laura", 23);
    printf("%d\n", ft_printf("diogo"));
}
