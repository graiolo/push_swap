/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_rotate_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:59:17 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/05 19:23:57 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_checker.h"

bool	ft_ra_bonus(t_node ***head)
{
	t_node	**list;

	list = *head;
	if (list == NULL || *list == NULL)
		return (false);
	ft_add_back(list, (*list)->elem);
	ft_rm_head(list);
	return (true);
}

bool	ft_rb_bonus(t_node ***head)
{
	t_node	**list;

	list = *head;
	if (list == NULL || *list == NULL)
		return (false);
	ft_add_back(list, (*list)->elem);
	ft_rm_head(list);
	return (true);
}

bool	ft_rr_bonus(t_node ***list_a, t_node ***list_b)
{
	if (ft_ra_bonus(list_a) == true && ft_rb_bonus(list_b) == true)
		return (true);
	return (false);
}
