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

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = 0;
	len_src = 0;
	if (!src || !dst)
	{
		while (src[len_src] != '\0')
			len_src++;
		return (len_src);
	}
	while (dst[len_dst] != '\0')
		len_dst++;
	if (dstsize > len_dst)
	{
		while (len_dst < dstsize - 1 && src[len_src] != '\0')
			dst[len_dst++] = src[len_src++];
		dst[len_dst] = '\0';
	}
	len_src--;
	while (src[++len_src] != '\0')
		len_dst++;
	if (len_dst > dstsize + len_src)
		len_dst = dstsize + len_src;
	return (len_dst);
}
