/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:45:16 by vfries            #+#    #+#             */
/*   Updated: 2022/10/14 00:13:27 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start_s1;
	char		*result;
	char		*start_result;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_calloc(1, sizeof(char)));
	start_s1 = s1;
	while (*s1)
		s1++;
	s1--;
	while (ft_strchr(set, *s1))
		s1--;
	result = malloc(sizeof(char) * (s1 - start_s1 + 2));
	if (result == NULL)
		return (NULL);
	start_result = result;
	while (start_s1 <= s1)
		*result++ = *start_s1++;
	*result = '\0';
	return (start_result);
}
