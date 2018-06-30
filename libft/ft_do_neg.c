/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_neg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 10:08:37 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/10 10:11:06 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_do_neg(int n)
{
	int		size;
	char	*str;

	n = n * -1;
	size = ft_count(n) + 1;
	str = ft_strnew(size);
	size--;
	while (n != 0)
	{
		str[size] = '0' + (n % 10);
		size--;
		n = n / 10;
	}
	str[size] = '-';
	return (str);
}
