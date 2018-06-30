/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getting_ray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:28:20 by dwilliam          #+#    #+#             */
/*   Updated: 2018/06/29 11:54:55 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

void			getting_times(t_position *pos)
{
	pos->oldtime = pos->time;
	pos->time = SDL_GetTicks();
	pos->frametime = (pos->time - pos->oldtime) / 1000.0;
	SDL_RenderPresent(pos->ren);
	SDL_RenderClear(pos->ren);
	pos->movespeed = pos->frametime * 15.0;
	pos->rotspeed = pos->frametime * 8.0;
}

void			init_values(t_position *pos)
{
	pos->quit = 0;
	pos->posx = 20;
	pos->posy = 20;
	pos->dirx = -1;
	pos->diry = 0;
	pos->planex = 0;
	pos->planey = 0.66;
	pos->time = 0;
	pos->oldtime = 0;
	pos->x = 0;
	pos->worldmap = read_map();
}

void			color(t_position ***pos)
{
	int y;

	y = (**pos)->drawstart;
	while (y < (**pos)->drawend)
	{
		if ((**pos)->worldmap[(**pos)->mapx][(**pos)->mapy] == 1)
			SDL_SetRenderDrawColor((**pos)->ren, 255, 0, 0, 255);
		else if ((**pos)->worldmap[(**pos)->mapx][(**pos)->mapy] == 2)
			SDL_SetRenderDrawColor((**pos)->ren, 0, 255, 0, 255);
		else if ((**pos)->worldmap[(**pos)->mapx][(**pos)->mapy] == 3)
			SDL_SetRenderDrawColor((**pos)->ren, 0, 0, 255, 255);
		else if ((**pos)->worldmap[(**pos)->mapx][(**pos)->mapy] == 4)
			SDL_SetRenderDrawColor((**pos)->ren, 255, 255, 255, 255);
		else
			SDL_SetRenderDrawColor((**pos)->ren, 255, 255, 0, 255);
		SDL_RenderDrawPoint((**pos)->ren, (**pos)->x, y);
		y++;
	}
	(**pos)->x++;
}
