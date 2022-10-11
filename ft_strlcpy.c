/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:36:26 by vfries            #+#    #+#             */
/*   Updated: 2022/10/11 13:47:24 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	src_len;

	src_len = 0;
	while (*src)
	{
		if (src_len++ < size)
			*dst++ = *src;
		src++;
	}
	if (src_len >= size)
		*--dst = '\0';
	else
		*dst = '\0';
	return (src_len);
}
