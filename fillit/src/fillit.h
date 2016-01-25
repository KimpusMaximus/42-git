/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 16:46:19 by jbyttner          #+#    #+#             */
/*   Updated: 2016/01/25 14:36:25 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

void	fillit_exit(int exit_code);

int		**fillit_read_file(int fd);

int		fillit_place_shape(int **shapes, char *grid, int pos[], int count);

int		fillit_find_space(int **shapes, char *grid, int count);

char	*fillit_validate_grid(int **shapes);

void	fillit_print_grid(char *grid);

#endif
