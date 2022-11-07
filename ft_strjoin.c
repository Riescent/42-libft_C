/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:21:43 by vfries            #+#    #+#             */
/*   Updated: 2022/11/07 18:13:12 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	result_size;

	result_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = malloc(result_size);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, result_size);
	ft_strlcat(result, s2, result_size);
	return (result);
}
