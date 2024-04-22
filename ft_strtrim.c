/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:45:01 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/22 20:38:19 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		sep[256];
	int		i;
	int		len;

	if (!s1 || !set)
		return (NULL);
	ft_bzero(sep, 256 * sizeof(int));
	i = -1;
	while (set[++i] != '\0')
		sep[(int)set[i]] = 1;
	while (*s1 && sep[(int)*s1])
		s1++;
	len = 0;
	i = -1;
	while (i < 0 || s1[i])
		if ((sep[(int)s1[++i]] || !s1[i]) && !sep[(int)s1[i - 1]])
			len = i;
	ret = (char *)malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1, len + 1);
	return (ret);
}
