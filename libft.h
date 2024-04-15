/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:42:46 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/02/14 18:42:46 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long	t_size_t;

# define _SIZE sizeof(t_size_t)
# define T_SIZE_T_MIN 0
# define T_SIZE_T_MAX ((1 << (_SIZE * 8 - 1) - 1) | (1 << (_SIZE * 8 - 1)))

// libc functions
int			ft_atoi(const char *str);
void		ft_bzero(void *s, t_size_t n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memchr(const void *s, int c, t_size_t n);
int			ft_memcmp(const void *s1, const void *s2, t_size_t n);
void		*ft_memcpy(void *restrict dst, const void *restrict src,
				t_size_t n);
void		*ft_memmove(void *dst, const void *src, t_size_t len);
void		*ft_memset(void *b, int c, t_size_t len);
char		*ft_strchr(const char *s, int c);
t_size_t	ft_strlcat(char *restrict dst, char *restrict src,
				t_size_t dstsize);
t_size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
				t_size_t dstsize);
t_size_t	ft_strlen(const char *s);
int			ft_strncmp(const char *s1, const char *s2, t_size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, t_size_t len);
char		*ft_strrchr(const char *s, int c);
int			ft_tolower(int c);
int			ft_toupper(int c);

void		*ft_calloc(t_size_t count, t_size_t size);

// additional functions

// linked list

#endif