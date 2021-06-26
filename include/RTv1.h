/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RTv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <mstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:40:49 by mstefani          #+#    #+#             */
/*   Updated: 2019/11/28 17:02:58 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_RTV1_H
#define RTV1_RTV1_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "../libft/libft.h"

typedef struct		s_vector{
	float x,y,z;
}					t_vector;

typedef struct		s_camera
{
	int				fov;
	float			x;
	float			y;
	float			z;
	int				xxxx;
	int				yyyy;

}					t_camera;

typedef struct		s_wnd
{
	void			*ptr;
	void			*wnd;
	void			*img;
	char			*data_addr;
	int				bit_per_pixel;
	int				size_line;
	int				endian;
}					t_wnd;

typedef struct		s_light
{
	float 			ratio;
	int 			color;
}					t_light;

typedef struct 		s_scene
{
	int				wx;
	int				wy;
	t_light			*light;
	t_camera		*cam;
}					t_scene;

typedef struct		s_rt
{
	t_wnd			*screen;
	t_camera		*camera;
	t_scene			*figure;
}					t_rt;

int			rgb_to_int(int red, int green, int blue);
#endif
