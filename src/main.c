/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:08:06 by dwilliam          #+#    #+#             */
/*   Updated: 2018/06/11 11:06:46 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"
#include <stdio.h>

SDL_Renderer	*init(char *title)
{
	SDL_Window		*win;
	SDL_Renderer	*ren;

	win = SDL_CreateWindow(title, 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED
			| SDL_RENDERER_PRESENTVSYNC);
	SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
	SDL_RenderClear(ren);
	SDL_RenderPresent(ren);
	return (ren);
}

int				main(void)
{
	t_position		pos;

	pos.ren = init("Dwilliam - Wolf3d");
	init_values(&pos);
	while (!pos.quit)
	{
		SDL_SetRenderDrawColor(pos.ren, 0, 0, 0, 255);
		SDL_RenderClear(pos.ren);
		pos.x = 0;
		while (pos.x < WIN_X)
		{
			getting_camera(&pos);
		}
		getting_times(&pos);
		while (SDL_PollEvent(&pos.event))
		{
			key_events(&pos);
		}
	}
	SDL_Quit();
	return (0);
}
