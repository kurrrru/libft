/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:43:32 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/15 22:51:00 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, t_size_t len)
{
	int	i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && --len >= 0)
	{
		if (*haystack == *needle)
		{
			i = 0;
			while (haystack[i] == needle[i] && needle[i] != '\0' && i <= len)
				i++;
			if (needle[i] == '\0')
				return ((char *)haystack);
		}
		haystack++;
	}
	return ((char *)0);
}
