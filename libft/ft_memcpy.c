/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:50:49 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/11 00:16:05 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*str2;

	str = dst;
	str2 = (char *)src;
	i = -1;
	while (++i < n)
		*(str + i) = *(str2 + i);
	return (dst);
}
