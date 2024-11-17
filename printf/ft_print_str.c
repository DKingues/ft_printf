/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:08:24 by dicosta-          #+#    #+#             */
/*   Updated: 2024/11/17 19:33:48 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_print_str(char * str)
{
    int counter;
    int i;

    counter = 0;
    i = 0;
    while (str[i])
    {
        counter += write(1, &str[i], 1);
        i++;
    }
    return (counter);
}