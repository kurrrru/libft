/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:11:59 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/19 01:16:21 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*ret;
	size_t		i;

	if (size > 0 && count > 0xfffffffful / size)
		return ((void *)0);
	ret = malloc(count * size);
	if (!ret)
		return ((void *)0);
	i = 0;
	while (i <= count * size)
	{
		((char *)ret)[i - 1] = 0;
		i++;
	}
	return (ret);
}
