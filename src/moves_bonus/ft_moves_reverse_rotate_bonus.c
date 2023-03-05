/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_reverse_rotate_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:33:33 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/05 19:23:55 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_checker.h"

bool	ft_rfa_bonus(t_node ***head)
{
	int		elem;
	t_node	*list;

	if (*head == NULL || **head == NULL)
		return (false);
	list = **head;
	while (list->next != NULL)
		list = list->next;
	elem = list->elem;
	ft_add_head(*head, elem);
	ft_rm_back(*head);
	return (true);
}

bool	ft_rfb_bonus(t_node ***head)
{
	int		elem;
	t_node	*list;

	if (*head == NULL || **head == NULL)
		return (false);
	list = **head;
	while (list->next != NULL)
		list = list->next;
	elem = list->elem;
	ft_add_head(*head, elem);
	ft_rm_back(*head);
	return (true);
}

bool	ft_rrr_bonus(t_node ***list_a, t_node ***list_b)
{
	if (ft_rfa_bonus(list_a) == true && ft_rfb_bonus(list_b) == true)
		return (true);
	return (false);
}
