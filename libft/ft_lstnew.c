/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:46:47 by dicosta-          #+#    #+#             */
/*   Updated: 2024/11/11 18:03:30 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *cont)
{
    t_list  *new;

    new = malloc(sizeof(t_list));
    if(!new)
        return (NULL);
    new->content = cont;
    new->next = NULL;
}