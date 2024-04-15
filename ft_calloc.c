/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:11:59 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/15 23:17:24 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size_t count, t_size_t size)
{
	void		*ret;
	t_size_t	i;

	ret = malloc(count * size);
	if (!ret)
		return ((void *)0);
	i = -1;
	while (++i <= count * size)
		((char *)ret)[i] = 0;
	return (ret);
}
