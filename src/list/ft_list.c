/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:15:28 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/02 19:38:32 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

bool	ft_add_head(t_node **head, int elem)
{
	t_node	*new_elem;

	new_elem = (t_node *)malloc(sizeof(t_node));
	if (new_elem == NULL)
		return (false);
	new_elem->elem = elem;
	new_elem->next = *head;
	*head = new_elem;
	ft_index_list(*head);
	return (true);
}

bool	ft_rm_head(t_node **head)
{
	t_node	*tmp;

	if (*head == NULL)
		return (false);
	tmp = *head;
	*head = (*head)->next;
	if (head != NULL && *head != NULL)
		(*head)->head = head;
	free(tmp);
	ft_index_list(*head);
	return (true);
}

bool	ft_add_back(t_node **head, int elem)
{
	t_node	*p;
	t_node	*q;

	q = *head;
	while (q != NULL)
	{
		p = q;
		q = q->next;
	}
	q = (t_node *)malloc(sizeof(t_node));
	if (q == NULL)
		return (false);
	q->elem = elem;
	q->next = NULL;
	if (*head == NULL)
		*head = q;
	else
		p->next = q;
	ft_index_list(*head);
	return (true);
}

bool	ft_rm_back(t_node **list)
{
	t_node	*q;
	t_node	*p;

	if (list == NULL || *list == NULL)
		return (false);
	q = *list;
	while (q->next != NULL)
	{
		p = q;
		q = q->next;
	}
	if (q == *list)
		*list = NULL;
	else
		p->next = NULL;
	free(q);
	ft_index_list(*list);
	return (true);
}
