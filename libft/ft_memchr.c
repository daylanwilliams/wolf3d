/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 20:05:27 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/06 14:20:32 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int		i;
	char				*s1;
	char				*temp;

	s1 = (char *)str;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (char)c)
		{
			temp = &s1[i];
			return (temp);
		}
		i++;
	}
	return (NULL);
}
