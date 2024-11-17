/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:29:36 by dicosta-          #+#    #+#             */
/*   Updated: 2024/11/11 21:41:10 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *temp;

    temp = *lst;
    while(temp->next != NULL)
    {
        t_list  *aux;
        aux = temp;
        temp = temp->next;
        del(aux->content);
        free(aux);
    }
    *lst = NULL;
}