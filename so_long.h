/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:13:13 by ckarakus          #+#    #+#             */
/*   Updated: 2023/03/13 18:55:31 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct s_img
{
	void	*img;
	char	*path;
	int		wid;
	int		hei;
}	t_img;

typedef struct s_ch
{
	int	x;
	int	y;
}	t_ch;

typedef struct s_win
{
	void	*mlx;
	void	*mlx_win;
	t_img	img;
	t_ch	ch;
}	t_win;

#endif