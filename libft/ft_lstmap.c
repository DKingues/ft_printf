/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:45:11 by dicosta-          #+#    #+#             */
/*   Updated: 2024/11/11 21:56:20 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *temp;
    t_list  *new_node;

    temp = lst;
    new_node = malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    
}