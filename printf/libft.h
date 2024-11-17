/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:29:51 by dicosta-          #+#    #+#             */
/*   Updated: 2024/11/17 19:55:23 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int ft_printf(const char* format, ...);
int ft_printf_format(char specifier, va_list ap);
int ft_print_str(char * str);
int ft_print_digit(int d);

#endif