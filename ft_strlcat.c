/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:36:34 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/02/24 13:36:34 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcat(char *restrict dst, char *restrict src, t_size_t dstsize)
{
	t_size_t	i;
	t_size_t	j;
	t_size_t	k;

	i = 0;
	j = 0;
	k = dstsize;
	while (dst[i] != '\0')
		i++;
	if (dstsize > i)
	{
		dstsize -= i;
		while (dstsize-- > 1 && src[j] != '\0')
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	j--;
	while (src[++j] != '\0')
		i++;
	if (i < k + j)
		return (i);
	else
		return (k + j);
}
