/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 08:01:51 by dwilliam          #+#    #+#             */
/*   Updated: 2018/06/11 10:58:54 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# define WIN_X 640
# define WIN_Y 480

# include "../libft/libft.h"
# include "../libft/get_next_line.h"
# include "fcntl.h"
# include <SDL.h>

typedef struct		s_arr
{
	int				x;
	int				y;
}					t_arr;

typedef struct		s_position
{
	int				x;
	int				w;
	int				y;
	int				mapx;
	int				mapy;
	int				stepx;
	int				stepy;
	int				hit;
	int				side;
	int				**worldmap;
	int				read;
	int				movex;
	int				movey;
	int				quit;
	int				lineheight;
	int				drawstart;
	int				drawend;
	int				h;
	double			posx;
	double			posy;
	double			dirx;
	double			diry;
	double			planex;
	double			planey;
	double			olddirx;
	double			oldplanex;
	double			time;
	double			oldtime;
	double			frametime;
	double			camerax;
	double			cameray;
	double			rayposx;
	double			rayposy;
	double			raydirx;
	double			raydiry;
	double			sidedistx;
	double			sidedisty;
	double			deltadistx;
	double			deltadisty;
	double			perpwalldist;
	double			movespeed;
	double			rotspeed;
	SDL_Renderer	*ren;
	SDL_Event		event;
}					t_position;

typedef struct		s_read
{
	char			*line;
	int				fd;
	int				x;
	int				y;
	int				index;
	int				**arr;
	char			**split;
}					t_read;

void				key_events(t_position *pos);
int					**read_map();
void				hitting(t_position *pos);
void				getting_ray(t_position **pos);
void				getting_camera(t_position *pos);
void				drawing_walls(t_position **pos);
void				getting_times(t_position *pos);
void				init_values(t_position *pos);
void				color(t_position ***pos);

#endif
