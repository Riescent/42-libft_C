/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:43:45 by vfries            #+#    #+#             */
/*   Updated: 2022/10/11 17:03:09 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <sys/errno.h>

char	*ft_strdup(const char *s1)
{
	char	*new_str;
	char	*new_str_start;

	new_str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (new_str == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	new_str_start = new_str;
	while (*s1)
		*new_str++ = *s1++;
	*new_str = '\0';
	return (new_str_start);
}
