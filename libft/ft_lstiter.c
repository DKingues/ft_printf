/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:42:06 by dicosta-          #+#    #+#             */
/*   Updated: 2024/11/11 21:45:02 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void(*f)(void *))
{
    t_list  *temp;

    temp = lst;

    while(temp->next != NULL)
    {   
        t_list  *aux;
        aux = temp;
        temp = temp->next;
        f(aux->content);
    }
}