/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:25:12 by dwilliam          #+#    #+#             */
/*   Updated: 2017/11/24 02:21:46 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

void			drawing_walls(t_position **pos)
{
	if ((*pos)->side == 0)
		(*pos)->perpwalldist = ((*pos)->mapx -
				(*pos)->rayposx + (1 - (*pos)->stepx) / 2)
			/ (*pos)->raydirx;
	else
		(*pos)->perpwalldist = ((*pos)->mapy
				- (*pos)->rayposy + (1 - (*pos)->stepy)
				/ 2) / (*pos)->raydiry;
	(*pos)->lineheight = (int)(WIN_Y / (*pos)->perpwalldist);
	(*pos)->drawstart = -(*pos)->lineheight / 2 + WIN_Y / 2;
	if ((*pos)->drawstart < 0)
		(*pos)->drawstart = 0;
	(*pos)->drawend = (*pos)->lineheight / 2 + WIN_Y / 2;
	if ((*pos)->drawend >= WIN_Y)
		(*pos)->drawend = WIN_Y - 1;
	color(&pos);
}

void			hitting(t_position *pos)
{
	while (pos->hit == 0)
	{
		if (pos->sidedistx < pos->sidedisty)
		{
			pos->sidedistx += pos->deltadistx;
			pos->mapx += pos->stepx;
			pos->side = 0;
		}
		else
		{
			pos->sidedisty += pos->deltadisty;
			pos->mapy += pos->stepy;
			pos->side = 1;
		}
		if (pos->worldmap[pos->mapx][pos->mapy] > 0)
			pos->hit = 1;
	}
	drawing_walls(&pos);
}

void			getting_ray(t_position **pos)
{
	(*pos)->hit = 0;
	if ((*pos)->raydirx < 0)
	{
		(*pos)->stepx = -1;
		(*pos)->sidedistx = ((*pos)->rayposx - (*pos)->mapx) *
			(*pos)->deltadistx;
	}
	else
	{
		(*pos)->stepx = 1;
		(*pos)->sidedistx = ((*pos)->mapx + 1.0 - (*pos)->rayposx) *
			(*pos)->deltadistx;
	}
	if ((*pos)->raydiry < 0)
	{
		(*pos)->stepy = -1;
		(*pos)->sidedisty = ((*pos)->rayposy -
				(*pos)->mapy) * (*pos)->deltadisty;
	}
	else
	{
		(*pos)->stepy = 1;
		(*pos)->sidedisty = ((*pos)->mapy + 1.0 -
				(*pos)->rayposy) * (*pos)->deltadisty;
	}
}

void			getting_camera(t_position *pos)
{
	pos->camerax = 2 * pos->x / (double)(WIN_X) - 1;
	pos->rayposx = pos->posx;
	pos->rayposy = pos->posy;
	pos->raydirx = pos->dirx + pos->planex * pos->camerax;
	pos->raydiry = pos->diry + pos->planey * pos->camerax;
	pos->mapx = pos->rayposx;
	pos->mapy = pos->rayposy;
	pos->deltadistx = sqrt(1 + (pos->raydiry * pos->raydiry)
			/ (pos->raydirx * pos->raydirx));
	pos->deltadisty = sqrt(1 + (pos->raydirx * pos->raydirx)
			/ (pos->raydiry * pos->raydiry));
	getting_ray(&pos);
	hitting(pos);
}
