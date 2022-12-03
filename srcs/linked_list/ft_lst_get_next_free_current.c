/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get_next_free_current.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 02:30:21 by vfries            #+#    #+#             */
/*   Updated: 2022/12/03 02:33:10 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"
#include <stdlib.h>

t_list	*ft_lst_get_next_free_current(t_list *lst)
{
	t_list	*next;

	if (lst == NULL)
		return (NULL);
	next = lst->next;
	free(lst);
	return (next);
}
