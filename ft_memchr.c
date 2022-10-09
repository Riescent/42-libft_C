/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:22:03 by vfries            #+#    #+#             */
/*   Updated: 2022/10/09 13:42:02 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	while (n > 0)
	{
		if (*(char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (0);
}
