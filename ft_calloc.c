/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:11:59 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/22 17:40:46 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*ret;
	size_t		i;

	if (size > 0 && count > 0xfffffffffffffffful / size)
		return ((void *)0);
	ret = malloc(count * size);
	if (!ret)
		return ((void *)0);
	i = (size_t)0;
	while (i <= count * size)
	{
		((char *)ret)[i - 1] = 0;
		i++;
	}
	return (ret);
}
