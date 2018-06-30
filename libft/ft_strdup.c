/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 21:20:10 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/10 21:35:03 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;

	s = malloc(ft_strlen((char *)s1) + 1);
	if (s == NULL)
		return (NULL);
	ft_strcpy(s, s1);
	return (s);
}
