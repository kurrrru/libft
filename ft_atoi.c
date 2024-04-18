/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/03/15 16:52:33 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/03/15 16:52:33 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	ret;
	long	sign;

	ret = 0l;
	sign = 1l;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1l;
	while ('0' <= *str && *str <= '9')
	{
		if (ret > 922337203685477580l || (ret == 922337203685477580l
				&& *str > '7'))
			return (-1);
		if (ret < -922337203685477580l || (ret == -922337203685477580l
				&& *str > '8'))
			return (0);
		ret = ret * 10l + (*str++ - '0') * sign;
	}
	return ((int)ret);
}
