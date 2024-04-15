/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:54:09 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/15 22:29:44 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, t_size_t n)
{
	t_size_t	i;

	i = 0;
	while (++i <= n)
		((char *)dst)[i - 1] = ((char *)src)[i - 1];
	return (dst);
}
