/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 19:49:12 by jbyttner          #+#    #+#             */
/*   Updated: 2015/11/26 20:18:32 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*copy;
	size_t	length;

	length = strlen(s1) + strlen(s2) + 1;
	copy = (char *)malloc(sizeof(char) * length);
	ft_strcpy(copy, s1);
	ft_strcat(copy, s2);
	return (copy);
}