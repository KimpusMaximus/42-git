/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_eqpoint_to_point2d.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 14:58:49 by jbyttner          #+#    #+#             */
/*   Updated: 2016/02/20 15:11:50 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmlxutil.h"

inline t_point	*mlx_eqpoint_to_point2d(t_point *p1, t_3dpoint *p2)
{
	p1->i = p2->i;
	p1->j = p2->j;
	return (p1);
}
