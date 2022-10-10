/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:23:46 by vfries            #+#    #+#             */
/*   Updated: 2022/10/10 14:56:25 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	result;
	char	is_negative;

	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	is_negative = 0;
	if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	result = 0;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *str++ - '0';
	if (is_negative)
		return (-result);
	return (result);
}
