/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:59:17 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/02 19:39:01 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

bool	ft_ra(t_node ***head)
{
	t_node	**list;

	list = *head;
	if (list == NULL || *list == NULL)
		return (false);
	ft_add_back(list, (*list)->elem);
	ft_rm_head(list);
	write(1, "ra\n", 3);
	return (true);
}

bool	ft_rb(t_node ***head)
{
	t_node	**list;

	list = *head;
	if (list == NULL || *list == NULL)
		return (false);
	ft_add_back(list, (*list)->elem);
	ft_rm_head(list);
	write(1, "rb\n", 3);
	return (true);
}

bool	ft_rr(t_node ***list_a, t_node ***list_b)
{
	if (ft_ra(list_a) == true && ft_rb(list_b) == true)
		return (true);
	return (false);
}
