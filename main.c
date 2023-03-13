/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:20:13 by ckarakus          #+#    #+#             */
/*   Updated: 2023/03/13 19:43:51 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "./mlx/mlx.h"
#include "stdio.h"
#include "unistd.h"

void	render(t_win *win)
{
	mlx_clear_window(win->mlx, win->mlx_win);
	mlx_put_image_to_window(win->mlx, win->mlx_win, win->img.img,
		win->ch.x, win->ch.y);
}

int	key_hook(int keycode, t_win *win)
{
	mlx_clear_window(win->mlx, win->mlx_win);
	if (keycode == 2)
	{
		win->ch.x += 5;
		render(win);
	}
	else if (keycode == 1)
	{
		win->ch.y += 5;
		render(win);
	}
	else if (keycode == 0)
	{
		win->ch.x -= 5;
		render(win);
	}
	else if (keycode == 13)
	{
		win->ch.y -= 5;
		render(win);
	}
	return (0);
}

int	main(void)
{
	t_win	win;

	win.ch.x = 0;
	win.ch.y = 0;
	win.mlx = mlx_init();
	win.mlx_win = mlx_new_window(win.mlx, 640, 480, "so_long");
	win.img.path = "./char.xpm";
	win.img.img = mlx_xpm_file_to_image(win.mlx_win, win.img.path,
			&win.img.wid, &win.img.hei);
	render(&win);
	mlx_key_hook(win.mlx_win, key_hook, &win);
	mlx_loop(win.mlx);
}
