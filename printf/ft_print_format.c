/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:05:40 by dicosta-          #+#    #+#             */
/*   Updated: 2024/11/17 19:58:54 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_printf_format(char specifier, va_list ap)
{
    int counter;

    counter = 0;
    if (specifier == 'i')
        counter += ft_print_digit(va_arg(ap, int));
    if (specifier == 'd')
        counter += ft_print_digit(va_arg(ap, int));
    if (specifier == 's')
        counter += ft_print_str(va_arg(ap, char *));
    return (counter);
}