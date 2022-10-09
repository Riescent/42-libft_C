/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:22:16 by vfries            #+#    #+#             */
/*   Updated: 2022/10/09 14:18:12 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(int c);
int				ft_toupper(int c);
int				ft_isdigit(int c);
int				ft_tolower(int c);
int				ft_isalnum(int c);
char			*ft_strchr(const char *s, int c);
int				ft_isprint(int c);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
unsigned int	ft_strlen(const char *str);
void			*ft_memchr(const void *s, int c, unsigned int n);
void			*ft_memset(void *b, int c, unsigned int len);

#endif
