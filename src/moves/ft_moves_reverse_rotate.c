/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_reverse_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:33:33 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/02 19:39:05 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

bool	ft_rfa(t_node ***head)
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
	write(1, "rra\n", 4);
	return (true);
}

bool	ft_rfb(t_node ***head)
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
	write(1, "rrb\n", 4);
	return (true);
}

bool	ft_rrr(t_node ***list_a, t_node ***list_b)
{
	if (ft_rfa(list_a) == true && ft_rfb(list_b) == true)
		return (true);
	return (false);
}
