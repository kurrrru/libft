/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:19:19 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/15 22:19:19 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	isalpha;
	int	isdigit;

	if (c < 0 | c > 255)
		return (0);
	isalpha = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	isdigit = (c >= '0' && c <= '9');
	return (isalpha || isdigit);
}
