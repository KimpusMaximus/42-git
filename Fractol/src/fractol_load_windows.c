/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_load_windows.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 20:26:23 by jbyttner          #+#    #+#             */
/*   Updated: 2016/01/11 20:51:16 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sysexits.h>
#include "libmlxutil.h"
#include "fractol.h"

/*
** In case of error when opening the windows,
** we immediately exit.
*/

static t_mlx_image  *fractol_load_window(int screen_count, char *window_name)
{
    t_fractol_config    *config;
    t_mlx_image         *im;

    config = fractol_get_config();
    if (!(mlx_set_window(screen_count, config->screen_width,
				config->screen_height, window_name)))
			fractol_exit(EX_UNAVAILABLE);
    else if (!(im = mlx_set_image(screen_count, config->screen_width,
				config->screen_height)))
			fractol_exit(EX_SOFTWARE);
    return (im);
}

int		fractol_load_windows(void)
{
	t_fractol_config	*config;
    t_mlx_image         *im;
	int					screen_count;

	screen_count = 0;
	config = fractol_get_config();
	if (config->render_mandelbrot)
    {
		im = fractol_load_window(screen_count++, "Mandelbrot");
        fractol_put_mandelbrot_to_image(im, config->mandelbrot_centre,
                config->mandelbrot_depth);
    }
	if (config->render_julia)
    {
		im = fractol_load_window(screen_count++, "Julia");
        fractol_put_julia_to_image(im, config->julia_centre,
                config->julia_depth);
    }
	return (screen_count);
}
