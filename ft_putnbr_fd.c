/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:44:25 by vfries            #+#    #+#             */
/*   Updated: 2022/11/07 15:10:05 by vfries           ###   ########lyon.fr   */
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
	if (n == 0)
		write(fd, "0", 1);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd_recursion(-(long)n, fd);
	}
	else
		ft_putnbr_fd_recursion(n, fd);
}
