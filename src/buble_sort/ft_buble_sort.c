/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buble_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:02:33 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/04 22:14:15 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

void	ft_bubble_sort(t_node *head)
{
	bool	swap;
	t_node	*list;
	t_node	*lptr;

	lptr = NULL;
	swap = true;
	if (head == NULL)
		return ;
	while (swap != false)
	{
		swap = false;
		list = head;
		while (list->next != lptr)
		{
			if (list->elem > list->next->elem)
			{
				ft_swap_node(list, list->next);
				swap = true;
			}
			list = list->next;
		}
		lptr = list;
	}
}

void	ft_swap_node(t_node *f_node, t_node *s_node)
{
	size_t	s_index;
	int		s_elem;

	s_elem = f_node->elem;
	s_index = f_node->index;
	f_node->elem = s_node->elem;
	f_node->index = s_node->index;
	s_node->elem = s_elem;
	s_node->index = s_index;
}

void	ft_abs_list(t_node *head)
{
	t_node	**c_list;
	t_node	*r_start;

	ft_init_head(&c_list);
	ft_copy_list(head, &c_list);
	ft_bubble_sort(*c_list);
	ft_index_list(*c_list);
	r_start = *c_list;
	while (head != NULL)
	{
		while (head->elem != (*c_list)->elem)
			*c_list = (*c_list)->next;
		head->elem = (*c_list)->index;
		head = head->next;
		*c_list = r_start;
	}
	ft_free_list(c_list);
}
