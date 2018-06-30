/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 09:56:56 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/08 22:16:50 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int n;
	int i;

	i = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-')
		n = -1;
	else
		n = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		i = (i * 10) + (*str - '0');
		str++;
	}
	return (i * n);
}
