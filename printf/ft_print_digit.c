/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:34:33 by dicosta-          #+#    #+#             */
/*   Updated: 2024/11/19 19:38:12 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_digit(int d)
{
    int counter;
    
    counter = 0;
    if (d < 0)
    {
        write(1, "-", 1);
        counter++;
        d *= -1;
    }
    if (d > 9)
    {
        ft_print_digit(d / 10); 
        ft_print_digit(d % 10); 
    }
    else
    {
        d = d + '0';
        counter += write(1, &d, 1);
    }
    return (counter);
}
