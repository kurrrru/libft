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

# define _SIZE	sizeof(t_size_t)
# define T_SIZE_T_MIN	0
# define T_SIZE_T_MAX	((1 << (_SIZE * 8 - 1) - 1) | (1 << (_SIZE * 8 - 1)))

// libc functions
void	*ft_memset(void *s, int c, t_size_t n);
void	ft_bzero(void *s, t_size_t n);
void	*ft_memcpy(void *dest, const void *src, t_size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, t_size_t n);
void	*ft_memmove(void *dest, const void *src, t_size_t n);
void	*ft_memchr(const void *s, int c, t_size_t n);

// additional functions

// linked list

#endif