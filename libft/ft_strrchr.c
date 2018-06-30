/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 08:49:13 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/10 17:41:45 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;

	s = (char *)str + ft_strlen(str);
	while (*s != c)
	{
		if (s == str)
		{
			return (NULL);
		}
		s--;
	}
	return (s);
}
