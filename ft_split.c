/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:38:05 by vfries            #+#    #+#             */
/*   Updated: 2022/11/07 15:02:28 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_get_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if (*s != c)
			len++;
		while (*s && *s != c)
			s++;
		if (*s)
			s++;
	}
	return (len);
}

static char	**ft_free_result(char **result, size_t i)
{
	while (i--)
		free(*result++);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**result;
	size_t	i;
	size_t	end;

	len = ft_get_len(s, c);
	result = malloc(sizeof(char *) * (len + 1));
	i = 0;
	while (i < len)
	{
		while (*s && *s == c)
			s++;
		end = 0;
		while (s[end] && s[end] != c)
			end++;
		result[i] = ft_substr(s, 0, end);
		if (result[i] == NULL)
			return (ft_free_result(result, i));
		s += end;
		i++;
	}
	result[i] = NULL;
	return (result);
}
