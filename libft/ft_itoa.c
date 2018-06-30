/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 08:51:36 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/10 17:12:43 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_dstrlen(int n)
{
	size_t	size;

	size = 1;
	while (n /= 10)
		size++;
	return (size);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	cpy;

	len = ft_dstrlen(n);
	cpy = n;
	if (n < 0)
	{
		cpy = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = cpy % 10 + '0';
	while (cpy /= 10)
		str[--len] = cpy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
