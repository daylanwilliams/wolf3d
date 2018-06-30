/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 11:27:34 by dwilliam          #+#    #+#             */
/*   Updated: 2017/06/19 11:29:09 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	if (size == 0 && ptr != NULL)
	{
		free(ptr);
		new_ptr = malloc(sizeof(void *) * (size));
		if (new_ptr == NULL)
			return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(sizeof(void *) * (size));
		if (new_ptr == NULL)
			return (NULL);
	}
	if (size >= ft_strlen((const char *)ptr))
	{
		new_ptr = malloc(sizeof(void *) * (size));
		if (new_ptr == NULL)
			return (NULL);
		new_ptr = ptr;
		ft_memcpy(new_ptr, (const char *)ptr, size);
		free(ptr);
	}
	return (new_ptr);
}
