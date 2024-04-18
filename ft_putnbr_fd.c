/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 01:49:51 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/19 01:49:51 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		pow_10;
	int		flag;

	if (n == -2147483648)
		return ((void)write(fd, "-2147483648", 11));
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	pow_10 = 1000000000;
	flag = 0;
	while (pow_10 > 0)
	{
		c = n / pow_10 + '0';
		flag |= (c != '0');
		if (flag || pow_10 == 1)
			write(fd, &c, 1);
		n %= pow_10;
		pow_10 /= 10;
	}
}
