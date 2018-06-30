/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 15:24:36 by dwilliam          #+#    #+#             */
/*   Updated: 2017/08/24 14:37:14 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;

	i = ft_strlen((char *)little);
	if (*little == 0)
		return ((char *)big);
	while (*big)
		if (!ft_memcmp(big++, little, i))
			return ((char *)big - 1);
	return (0);
}
