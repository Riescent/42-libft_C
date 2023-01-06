/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsti_cmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 03:24:48 by vfries            #+#    #+#             */
/*   Updated: 2023/01/06 03:30:23 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

// ft_lsti_cmp() doesn't do:
// if (lst_1->content != lst_2->content)
//			return (lst_1->content - lst_2->content);
// Because I'm scared of possible overflow

int	ft_lsti_cmp(t_list_i *lst_1, t_list_i *lst_2)
{
	while (lst_1 != NULL && lst_2 != NULL)
	{
		if (lst_1->content < lst_2->content)
			return (-1);
		if (lst_1->content > lst_2->content)
			return (1);
		lst_1 = lst_1->next;
		lst_2 = lst_2->next;
	}
	if (lst_1 != NULL && lst_2 == NULL)
		return (lst_1->content);
	if (lst_1 == NULL && lst_2 != NULL)
		return (-lst_2->content);
	return (0);
}
