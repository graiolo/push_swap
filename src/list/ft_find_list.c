/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:47:57 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/02 19:38:44 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

int	ft_find_min(t_node *list)
{
	int	min;

	min = INT_MAX;
	while (list != NULL)
	{
		if (min > list->elem)
			min = list->elem;
		list = list->next;
	}
	return (min);
}

int	ft_find_max(t_node *list)
{
	int	max;

	max = INT_MIN;
	while (list != NULL)
	{
		if (max < list->elem)
			max = list->elem;
		list = list->next;
	}
	return (max);
}

bool	ft_find_elem(t_node *list, int elem)
{
	while (list != NULL)
	{
		if (list->elem == elem)
			return (true);
		list = list->next;
	}
	return (false);
}

size_t	ft_find_index(t_node *list, int elem)
{
	while (list->elem != elem)
		list = list->next;
	return (list->index);
}
