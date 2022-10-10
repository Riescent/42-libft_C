/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:39:19 by vfries            #+#    #+#             */
/*   Updated: 2022/10/10 23:55:40 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	total_size;

	total_size = ft_strlen(dst);
	if (total_size >= size)
		return (size + ft_strlen(src));
	dst += total_size;
	while (*src)
	{
		if (total_size++ < size)
			*dst++ = *src;
		src++;
	}
	if (total_size >= size)
		*--dst = '\0';
	else
		*dst = '\0';
	return (total_size);
}
