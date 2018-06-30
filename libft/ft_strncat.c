/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 08:47:01 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/06 22:11:07 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int				i;
	int				j;
	unsigned int	a;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	a = 0;
	while (src[j] && a < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
