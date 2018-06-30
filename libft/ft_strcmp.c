/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 09:24:01 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/08 00:43:09 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str;
	unsigned char	*str2;
	int				i;

	i = 0;
	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str[i] && str2[i] && str2[i] == str[i])
	{
		i++;
	}
	return (str[i] - str2[i]);
}
