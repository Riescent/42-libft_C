/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:38:05 by vfries            #+#    #+#             */
/*   Updated: 2022/10/12 18:09:51 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_get_result_size(const char *s, char c)
{
	size_t	size;

	while (*s && *s == c)
		s++;
	if (*s == '\0')
		return (0);
	size = 1;
	while (*s)
	{
		if (*s == c)
			size++;
		while (*s && *s == c)
			s++;
		if (*s)
			s++;
		else
			size--;
	}
	return (size);
}

static char	**ft_free_result(char **result, size_t i)
{
	while (i--)
		free(*result++);
	free(result);
	return (NULL);
}

static size_t	ft_get_start(const char *s, char c, size_t end)
{
	while (s[end] && s[end] == c)
		end++;
	return (end);
}

static size_t	ft_get_end(const char *s, char c, size_t start)
{
	while (s[start] && s[start] != c)
		start++;
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	result_size;

	result_size = ft_get_result_size(s, c);
	result = malloc(sizeof(char *) * (result_size + 1));
	if (result == NULL)
		return (NULL);
	end = 0;
	i = 0;
	while (i < result_size)
	{
		start = ft_get_start(s, c, end);
		end = ft_get_end(s, c, start);
		result[i] = malloc(sizeof(char) * (end - start + 1));
		if (result[i] == NULL)
			return (ft_free_result(result, i));
		ft_strlcpy(result[i], s + start, end - start + 1);
		i++;
	}
	result[i] = NULL;
	return (result);
}
