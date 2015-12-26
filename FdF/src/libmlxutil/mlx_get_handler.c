/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_get_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 19:26:30 by jbyttner          #+#    #+#             */
/*   Updated: 2015/12/09 20:32:04 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "libmlxutil.h"

t_mlx_handler	*mlx_get_handler(void)
{
	static t_mlx_handler	handler = { 0 };

	if (!(handler.init))
		if (!(handler.init = mlx_init()))
			return (0);
	return (&handler);
}