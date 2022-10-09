/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:53:28 by vfries            #+#    #+#             */
/*   Updated: 2022/10/09 12:35:20 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *str_1, const char *str_2, unsigned int n)
{
	unsigned int	i_1;
	unsigned int	i_2;

	if (n == 0)
		return (0);
	i_1 = 0;
	i_2 = 0;
	while (i_1 < n && i_2 < n)
	{
		if (str_1[i_1] < str_2[i_2])
			return (-1);
		if (str_1[i_1] > str_2[i_2])
			return (1);
		if (!(str_1[i_1] + str_2[i_2]))
			return (0);
		if (str_1[i_1])
			i_1++;
		if (str_2[i_2])
			i_2++;
	}
	return (0);
}
