/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_event.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:48:42 by dwilliam          #+#    #+#             */
/*   Updated: 2017/11/24 01:56:30 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

void		key_up(t_position *pos)
{
	if (pos->event.key.keysym.sym == SDLK_UP)
	{
		if (!(pos->worldmap[pos->movex][(int)(pos->posy)]))
			pos->posx += pos->dirx * pos->movespeed;
		if (!(pos->worldmap[(int)(pos->posx)][pos->movey]))
			pos->posy += pos->diry * pos->movespeed;
	}
}

void		key_down(t_position *pos)
{
	if (pos->event.key.keysym.sym == SDLK_DOWN)
	{
		if (!(pos->worldmap[pos->movex][(int)(pos->posy)]))
			pos->posx -= pos->dirx * pos->movespeed;
		if (!(pos->worldmap[(int)(pos->posx)][pos->movey]))
			pos->posy -= pos->diry * pos->movespeed;
	}
}

void		key_right(t_position *pos)
{
	if (pos->event.key.keysym.sym == SDLK_RIGHT)
	{
		pos->olddirx = pos->dirx;
		pos->dirx = pos->dirx * cos(-pos->rotspeed)
			- pos->diry * sin(-pos->rotspeed);
		pos->diry = pos->olddirx * sin(-pos->rotspeed)
			+ pos->diry * cos(-pos->rotspeed);
		pos->oldplanex = pos->planex;
		pos->planex = pos->planex * cos(-pos->rotspeed)
			- pos->planey * sin(-pos->rotspeed);
		pos->planey = pos->oldplanex * sin(-pos->rotspeed)
			+ pos->planey * cos(-pos->rotspeed);
	}
}

void		key_left(t_position *pos)
{
	if (pos->event.key.keysym.sym == SDLK_LEFT)
	{
		pos->olddirx = pos->dirx;
		pos->dirx = pos->dirx * cos(pos->rotspeed)
			- pos->diry * sin(pos->rotspeed);
		pos->diry = pos->olddirx * sin(pos->rotspeed)
			+ pos->diry * cos(pos->rotspeed);
		pos->oldplanex = pos->planex;
		pos->planex = pos->planex * cos(pos->rotspeed)
			- pos->planey * sin(pos->rotspeed);
		pos->planey = pos->oldplanex * sin(pos->rotspeed)
			+ pos->planey * cos(pos->rotspeed);
	}
}

void		key_events(t_position *pos)
{
	pos->movex = pos->posx + pos->dirx * pos->movespeed;
	pos->movey = pos->posy + pos->diry * pos->movespeed;
	key_up(pos);
	key_down(pos);
	key_left(pos);
	key_right(pos);
	if (pos->event.key.keysym.sym == SDLK_ESCAPE)
		pos->quit = 1;
	else if (pos->event.key.keysym.sym == SDLK_x)
	{
		SDL_SetRenderDrawColor(pos->ren, 0, 0, 0, 255);
		SDL_RenderClear(pos->ren);
		SDL_SetRenderDrawColor(pos->ren, 255, 0, 0, 255);
		SDL_RenderDrawPoint(pos->ren, 50, 50);
		SDL_RenderPresent(pos->ren);
	}
}
