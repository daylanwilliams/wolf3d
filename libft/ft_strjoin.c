/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 09:27:55 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/10 17:46:42 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = ft_strnew(len + len2);
	if (!str)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < len)
		*(str + i) = *(s1 + i);
	while (++j < len2)
		*(str + i++) = *(s2 + j);
	return (str);
}
