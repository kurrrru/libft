/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:18:23 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/02/16 14:18:23 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, t_size_t n)
{
	t_size_t	i;
	void		*ret;

	i = 0;
	ret = (void *)0;
	while (++i <= n)
	{
		if (((unsigned char *)s)[i - 1] == (unsigned char)c)
		{
			ret = (unsigned char *)s + i - 1;
			break ;
		}
	}
	return (ret);
}
