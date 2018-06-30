/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:03:48 by dwilliam          #+#    #+#             */
/*   Updated: 2017/07/02 07:17:21 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	const char	*srcc;
	char		*dst;

	srcc = src;
	dst = dest;
	if (dst <= srcc || srcc >= (dst + len))
	{
		while (len)
		{
			*dst++ = *srcc++;
			len--;
		}
	}
	else
	{
		srcc = srcc + len - 1;
		dst = dst + len - 1;
		while (len)
		{
			*dst-- = *srcc--;
			len--;
		}
	}
	return (dest);
}
