/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 18:47:39 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/11 00:00:15 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned int		i;
	char				*str1;
	char				*str2;
	char				*str3;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	str3 = 0;
	while (i < n && str3 == 0)
	{
		str1[i] = str2[i];
		if (str2[i] == ((char)c))
			str3 = str1 + i + 1;
		i++;
	}
	return (str3);
}
