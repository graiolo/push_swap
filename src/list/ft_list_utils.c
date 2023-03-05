/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:58:10 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/05 16:19:37 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

bool	ft_printf_list(t_node *list)
{
	if (list == NULL)
		return (false);
	while (list != NULL)
	{
		if (list->next != NULL)
			printf("head: %p\tp: %p\tpnext: %p\t\telem: %d\t\tindice: %lu\n",
				list->head, list, list->next, list->elem, list->index);
		else
			printf("head: %p\tp: %p\tpnext: %p\t\telem: %d\t\tindice: %lu\n",
				list->head, list, list->next, list->elem, list->index);
		list = list->next;
	}
	return (true);
}

bool	ft_index_list(t_node *head)
{
	t_node	*list;
	int		ind;

	ind = 1;
	if (head == NULL)
		return (false);
	list = head;
	while (list != NULL)
	{
		list->head = &head;
		list->index = ind;
		list = list->next;
		ind++;
	}
	return (true);
}

void	ft_copy_list(t_node *old_list, t_node ***new_list)
{
	while (old_list != NULL)
	{
		ft_add_back(*new_list, old_list->elem);
		old_list = old_list->next;
	}
}
