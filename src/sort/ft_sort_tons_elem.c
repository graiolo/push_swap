/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tons_elem.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:30:30 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/04 22:08:28 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

size_t	ft_count_elem_bits_form(t_node ***head)
{
	size_t	n_bits;
	size_t	n_elem;

	n_elem = ft_count_elem(**head) - 1;
	n_bits = ft_count_bits(n_elem);
	return (n_bits);
}

size_t	ft_count_bits(int nbr)
{
	size_t	n_bits;

	n_bits = 0;
	while (nbr)
	{
		nbr /= 2;
		n_bits++;
	}
	return (n_bits);
}

void	ft_sort_tons_elem(t_node ***a_head, t_node ***b_head)
{
	size_t	n_elem;
	size_t	n_bits;
	size_t	index;

	n_bits = ft_count_elem_bits_form(a_head);
	index = 0;
	while (index < n_bits)
	{
		n_elem = ft_count_elem(**a_head);
		while (n_elem)
		{
			if (!((((**a_head)->elem) >> index) & 1))
				ft_pb(*a_head, *b_head);
			else
				ft_ra(a_head);
			n_elem--;
		}
		n_elem = ft_count_elem(**b_head);
		while (n_elem)
		{
			ft_pa(*b_head, *a_head);
			n_elem--;
		}
		index++;
	}
}
