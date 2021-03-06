/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_render_mandelbrot.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 17:24:49 by jbyttner          #+#    #+#             */
/*   Updated: 2016/02/20 21:16:05 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "fractol.h"

void	fractol_render_mandelbrot(int screen_count)
{
	t_fractol_config	*config;

	config = fractol_get_config();
	if (config->set_mandelbrot_render)
	{
		config->set_mandelbrot_render = 0;
		fractol_put_mandelbrot_to_image(mlx_get_image(screen_count),
			&(config->centre_mandelbrot),
			&(config->depth_mandelbrot));
		mlx_put_image_to_window(mlx_get_handler()->init,
			mlx_get_window(screen_count)->window,
			mlx_get_image(screen_count)->image, 0, 0);
	}
}
