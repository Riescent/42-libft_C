/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:39:19 by vfries            #+#    #+#             */
/*   Updated: 2022/11/07 14:00:08 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return (dstsize + ft_strlen(src));
	return (dst_len + ft_strlcpy(dst + dst_len, src, dstsize - dst_len));
}
