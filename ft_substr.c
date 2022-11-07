/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:07:00 by vfries            #+#    #+#             */
/*   Updated: 2022/11/07 14:49:12 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	result_len;
	char	*result_start;

	s += start;
	result_len = 0;
	while (s[result_len] && result_len < len)
		result_len++;
	result = malloc(sizeof(char) * result_len + 1);
	if (result == NULL)
		return (NULL);
	result_start = result;
	while (result_len--)
		*result++ = *s++;
	*result = '\0';
	return (result_start);
}
