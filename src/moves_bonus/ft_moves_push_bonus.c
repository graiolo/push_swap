/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_push_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:04:37 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/05 19:31:28 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_checker.h"

bool	ft_pa_bonus(t_node **list_a, t_node **list_b)
{
	if (ft_count_elem(*list_a) == 0)
		return (false);
	ft_add_head(list_b, (*list_a)->elem);
	ft_rm_head(list_a);
	return (true);
}

bool	ft_pb_bonus(t_node **list_a, t_node **list_b)
{
	if (ft_count_elem(*list_a) == 0)
		return (false);
	ft_add_head(list_b, (*list_a)->elem);
	ft_rm_head(list_a);
	return (true);
}
