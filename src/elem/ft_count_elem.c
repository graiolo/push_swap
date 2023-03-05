/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_elem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:00:18 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/02 19:38:06 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

size_t	ft_count_elem(t_node *list)
{
	size_t	n_elem;

	n_elem = 0;
	while (list != NULL)
	{
		n_elem++;
		list = list->next;
	}
	return (n_elem);
}

bool	ft_long_zero(t_node *list)
{
	if (list != NULL)
		return (false);
	return (true);
}

bool	ft_long_one(t_node *list)
{
	size_t	n_elem;

	n_elem = 0;
	while (list != NULL)
	{
		n_elem++;
		list = list->next;
		if (n_elem == 1)
			return (true);
	}
	return (false);
}

bool	ft_long_two(t_node *list)
{
	size_t	n_elem;

	n_elem = 0;
	while (list != NULL)
	{
		n_elem++;
		list = list->next;
		if (n_elem == 2)
			return (true);
	}
	return (false);
}
