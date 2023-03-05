/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_swipe_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:04:36 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/05 19:23:59 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_checker.h"

bool	ft_sa_bonus(t_node *list)
{
	int	tmp;

	if (ft_count_elem(list) < 2)
		return (false);
	tmp = list->elem;
	list->elem = list->next->elem;
	list->next->elem = tmp;
	return (true);
}

bool	ft_sb_bonus(t_node *list)
{
	int	tmp;

	if (ft_count_elem(list) < 2)
		return (false);
	tmp = list->elem;
	list->elem = list->next->elem;
	list->next->elem = tmp;
	return (true);
}

bool	ft_ss_bonus(t_node *list_a, t_node *list_b)
{
	if (ft_sa_bonus(list_a) == true && ft_sb_bonus(list_b) == true)
		return (true);
	return (false);
}
