/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 17:28:16 by dwilliam          #+#    #+#             */
/*   Updated: 2017/09/08 15:43:07 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_word_length(char *str, int i)
{
	int		count;

	count = 0;
	while (str[i] && is_space(str[i]))
		i++;
	while (str[i] && !is_space(str[i]))
	{
		count++;
		i++;
	}
	return (count);
}
