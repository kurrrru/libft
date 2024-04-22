/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:11:10 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/19 02:11:10 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ret;
	size_t	l;
	int		i;

	l = ((n < 0) + 1);
	if (n > 0)
		n = -n;
	i = 1;
	while (n / i <= -10 && l++ && i < 1000000000)
		i *= 10;
	ret = (char *)malloc((l + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	ret[0] = '-';
	ret[l] = '\0';
	if (n == 0)
		ret[0] = '0';
	while (n < 0)
	{
		ret[--l] = -(n % 10) + '0';
		n /= 10;
	}
	return (ret);
}
