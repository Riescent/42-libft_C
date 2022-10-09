/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:22:16 by vfries            #+#    #+#             */
/*   Updated: 2022/10/09 18:46:35 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_toupper(int c);
int		ft_isdigit(int c);
int		ft_tolower(int c);
int		ft_isalnum(int c);
char	*ft_strchr(const char *s, int c);
int		ft_isprint(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *b, int c, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);

#endif
