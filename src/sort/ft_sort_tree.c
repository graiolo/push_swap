/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:13:31 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/02 19:39:28 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

/*
 *	1 = RRA
 *	2 = RA
 *	3 = SA
 */

void	ft_case(int min, int mid, int max, t_node ***head)
{
	if (min == 3 && max == 2 && mid == 1)
		ft_rfa(head);
	else if (min == 2 && max == 1 && mid == 3)
		ft_ra(head);
	else
		ft_sa(**head);
}

void	ft_sort_tree_elem(t_node ***head)
{
	int		value[3];
	t_node	*list;

	list = **head;
	value[0] = ft_find_min(list);
	value[1] = value[0];
	value[2] = ft_find_max(list);
	while (list != NULL)
	{
		if (value[1] == value[0] || value[1] == value[2])
			value[1] = list->elem;
		list = list->next;
	}
	list = **head;
	value[0] = ft_find_index(list, value[0]);
	value[1] = ft_find_index(list, value[1]);
	value[2] = ft_find_index(list, value[2]);
	if (ft_check_sort(list) == false)
	{
		ft_case(value[0], value[1], value[2], head);
		ft_sort_tree_elem(head);
	}
}
