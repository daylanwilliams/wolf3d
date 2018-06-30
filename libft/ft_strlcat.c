/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 08:58:31 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/10 23:34:00 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dst;
	size_t	src1;

	dst = ft_strlen(dest);
	src1 = ft_strlen((char *)src);
	if (dst > n)
		return (n + src1);
	ft_strncat(dest, src, n - dst - 1);
	return (dst + src1);
}
