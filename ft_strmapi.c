/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:08:14 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/19 02:08:14 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	l;
	char	*ret;
	size_t	i;

	if (!s || !f)
		return ((void *)0);
	l = 0ul;
	while (s[l] != '\0')
		l++;
	ret = (char *)malloc((l + 1) * sizeof(char));
	if (!ret)
		return ((void *)0);
	i = 0ul;
	while (i < l)
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
