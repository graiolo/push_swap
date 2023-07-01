/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:06:50 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/01 23:04:11 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_node	**a_list;
	t_node	**b_list;

	if (argc == 1)
		return (0);
	ft_init_head(&a_list);
	if (argc == 1 || ft_check_valid(a_list, argc, argv) == false)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	ft_abs_list(*a_list);
	ft_init_head(&b_list);
	ft_check_case(a_list, b_list);
	ft_free_list(a_list);
	ft_free_list(b_list);
	return (0);
}
