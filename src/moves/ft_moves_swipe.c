/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_swipe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:04:36 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/02 19:38:57 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

bool	ft_sa(t_node *list)
{
	int	tmp;

	if (ft_count_elem(list) < 2)
		return (false);
	tmp = list->elem;
	list->elem = list->next->elem;
	list->next->elem = tmp;
	write(1, "sa\n", 3);
	return (true);
}

bool	ft_sb(t_node *list)
{
	int	tmp;

	if (ft_count_elem(list) < 2)
		return (false);
	tmp = list->elem;
	list->elem = list->next->elem;
	list->next->elem = tmp;
	write(1, "sb\n", 3);
	return (true);
}

bool	ft_ss(t_node *list_a, t_node *list_b)
{
	if (ft_sa(list_a) == true && ft_sb(list_b) == true)
		return (true);
	return (false);
}
