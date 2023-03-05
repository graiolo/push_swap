/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:42:29 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/02 22:44:39 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

bool	ft_is_space(const char str)
{
	if (str == 32 || (str > 8 && str < 14))
		return (true);
	return (false);
}

bool	ft_is_number(const char str)
{
	if (str > 47 && str < 58)
		return (true);
	return (false);
}

long int	ft_long_atoi(const char *str)
{
	long int		nbr;
	bool			sign;
	size_t			ind;

	ind = 0;
	nbr = 0;
	sign = true;
	if (str == NULL)
		exit (0);
	while (str[ind] != 0 && ft_is_space(str[ind]) == true)
		ind++;
	if (str[ind] == '+' || str[ind] == '-')
		if (str[ind++] == '-')
			sign = false;
	while (str[ind] != 0 && ft_is_number(str[ind]) == true)
		nbr = ((nbr * 10) + (str[ind++] - 48));
	if (sign == true)
		return (nbr);
	return (nbr * (-1));
}
