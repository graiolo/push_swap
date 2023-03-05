/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:55:12 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/05 22:15:08 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

void	ft_sort_five_elem(t_node ***a_head, t_node ***b_head)
{
	ft_p_min(a_head, b_head);
	ft_p_min(a_head, b_head);
	ft_sort_tree_elem(a_head);
	if (ft_check_sort(**b_head))
		ft_rb(b_head);
	while (!(ft_check_sort(**a_head) == true && ft_count_elem(**b_head) == 0))
	{
		if (ft_count_elem(**b_head) != 0 && (**a_head)->elem > (**b_head)->elem)
			ft_pa(*b_head, *a_head);
		else
			ft_ra(a_head);
	}
}

void	ft_p_min(t_node ***a_head, t_node ***b_head)
{
	while ((**a_head)->elem != 1 && (**a_head)->elem != 2)
		ft_rfa(a_head);
	ft_pb(*a_head, *b_head);
}
