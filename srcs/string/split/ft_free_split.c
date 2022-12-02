/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 23:06:05 by vfries            #+#    #+#             */
/*   Updated: 2022/12/02 23:10:12 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free_split(char **strs)
{
	size_t	i;

	if (strs == NULL)
		return ;
	i = -1;
	while (strs[++i])
		free(strs[i]);
	free(strs);
}
