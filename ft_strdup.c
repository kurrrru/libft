/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:25:03 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/15 23:30:37 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*ret;
	t_size_t	len;
	int			i;

	len = 0;
	while (s1[len])
		len++;
	ret = (char *)malloc((len + 1) * sizeof(char));
	if (ret == (void *)0)
		return ((void *)0);
	i = -1;
	while (++i <= len)
		ret[i] = s1[i];
	return (ret);
}
