/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:23:41 by dwilliam          #+#    #+#             */
/*   Updated: 2017/11/24 01:40:03 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"
#include <stdio.h>

int		**read_map(void)
{
	t_read	b;
	int		**arr;

	b.y = 0;
	b.fd = open("./maps/map1.txt", O_RDONLY);
	arr = (int **)malloc(sizeof(int *) * 25);
	arr[0] = NULL;
	while (get_next_line(b.fd, &b.line) == 1)
	{
		arr[b.y] = (int *)malloc(sizeof(int) * 25);
		b.x = 0;
		b.index = -1;
		while (b.line[++b.index])
		{
			if (ft_isdigit(b.line[b.index]))
			{
				arr[b.y][b.x] = b.line[b.index] - '0';
				b.x++;
			}
		}
		b.y++;
		free(b.line);
	}
	close(b.fd);
	return (arr);
}
