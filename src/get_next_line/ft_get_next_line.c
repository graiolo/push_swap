/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:36:49 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/05 21:47:41 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_checker.h"

char	*ft_get_next_line(int fd)
{
	char	*moves;
	char	val;
	int		n_bit;

	n_bit = 1;
	val = 0;
	moves = (char *)calloc(1, 5);
	if (moves == NULL)
		return (NULL);
	while (val != '\n')
	{
		n_bit = read(fd, &val, 1);
		if (n_bit == 0)
		{
			free(moves);
			return (NULL);
		}
		moves = ft_strjoin(moves, val);
	}
	return (moves);
}

char	*ft_strjoin(char *old, const char val)
{
	char	*new;
	int		ind;

	ind = -1;
	new = malloc(ft_strlen(old) + 1);
	while (old[++ind] != 0)
		new[ind] = old[ind];
	new[ind++] = val;
	new[ind] = 0;
	free(old);
	return (new);
}
