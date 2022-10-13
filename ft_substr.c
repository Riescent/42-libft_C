/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:07:00 by vfries            #+#    #+#             */
/*   Updated: 2022/10/13 22:30:47 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*result;
	char	*result_start;

	size = 0;
	s += start;
	while (s[size] && len)
	{
		size++;
		len--;
	}
	result = malloc(sizeof(char) * size + 1);
	if (result == NULL)
		return (NULL);
	result_start = result;
	while (size--)
		*result++ = *s++;
	*result = '\0';
	return (result_start);
}
