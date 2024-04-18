/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:25:03 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/18 20:02:42 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*ret;
	size_t		len;
	size_t		i;

	len = 0;
	while (s1[len])
		len++;
	ret = (char *)malloc((len + 1) * sizeof(char));
	if (ret == (void *)0)
		return ((void *)0);
	i = 0;
	while (++i <= len + 1)
		ret[i - 1] = s1[i - 1];
	return (ret);
}
