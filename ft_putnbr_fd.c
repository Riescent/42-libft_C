/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:44:25 by vfries            #+#    #+#             */
/*   Updated: 2022/10/12 20:59:30 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putnbr_fd_recursion(long n, int fd)
{
	char	c;

	if (n == 0)
		return ;
	ft_putnbr_fd_recursion(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	long_n;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	long_n = n;
	if (long_n < 0)
	{
		write(fd, "-", 1);
		long_n = -long_n;
	}
	ft_putnbr_fd_recursion(long_n, fd);
}
