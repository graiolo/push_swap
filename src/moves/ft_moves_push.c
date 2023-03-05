/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:04:37 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/02 19:39:11 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

bool	ft_pa(t_node **list_a, t_node **list_b)
{
	if (ft_count_elem(*list_a) == 0)
		return (false);
	ft_add_head(list_b, (*list_a)->elem);
	ft_rm_head(list_a);
	write(1, "pa\n", 3);
	return (true);
}

bool	ft_pb(t_node **list_a, t_node **list_b)
{
	if (ft_count_elem(*list_a) == 0)
		return (false);
	ft_add_head(list_b, (*list_a)->elem);
	ft_rm_head(list_a);
	write(1, "pb\n", 3);
	return (true);
}
