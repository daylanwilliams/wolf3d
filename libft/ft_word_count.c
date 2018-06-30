/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 17:26:38 by dwilliam          #+#    #+#             */
/*   Updated: 2017/08/18 17:28:00 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_count(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		while (str[i] && !is_space(str[i]))
		{
			count++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (count);
}
