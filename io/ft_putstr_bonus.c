/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:22:54 by vfries            #+#    #+#             */
/*   Updated: 2022/11/19 12:24:26 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <unistd.h>

void	ft_putstr_fd(char *s)
{
	if (s == NULL)
		return ;
	write(1, s, ft_strlen(s));
}
