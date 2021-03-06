/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_print_grid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 14:37:14 by jbyttner          #+#    #+#             */
/*   Updated: 2016/02/13 14:59:26 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fillit_print_grid(char *grid)
{
	int		i;
	int		size;

	i = 0;
	size = (int)grid[0];
	grid++;
	while (i < size)
	{
		write(1, grid + i * size, size);
		write(1, "\n", 1);
		i++;
	}
	free(grid);
}
