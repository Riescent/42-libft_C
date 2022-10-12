/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:18:37 by vfries            #+#    #+#             */
/*   Updated: 2022/10/12 18:50:47 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	buf[12];
	char	*buf_ptr;
	char	is_negative;
	long	long_n;

	if (n == 0)
		return (ft_strdup("0"));
	long_n = n;
	is_negative = 0;
	if (n < 0)
	{
		long_n = -long_n;
		is_negative = 1;
	}
	buf[11] = '\0';
	buf_ptr = buf + 10;
	while (long_n > 0)
	{
		*buf_ptr-- = long_n % 10 + '0';
		long_n /= 10;
	}
	if (is_negative)
		*buf_ptr-- = '-';
	return (ft_strdup(buf_ptr + 1));
}
