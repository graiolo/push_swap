/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:09:46 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/04 22:57:11 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

bool	ft_check_num_exist(int num, char *str)
{
	size_t	ind;

	ind = 0;
	if (num != 0)
		return (true);
	while (str[ind] != 0 && ft_is_space(str[ind]) == true)
		ind++;
	if (str[ind] == '+' || str[ind] == '-')
		ind++;
	if (ft_is_number(str[ind]) == true)
		return (true);
	return (false);
}

bool	ft_check_valid(t_node **head, int argc, char **argv)
{
	long int		num;
	size_t			cur;

	cur = 1;
	if (argc == 2)
		if (ft_split_args(argv, &head) == false)
			return (false);
	if (argc > 2)
	{
		while (cur < (size_t)argc)
		{	
			num = ft_long_atoi(argv[cur]);
			if (ft_strlen(argv[cur]) > 11 || num < INT_MIN || num > INT_MAX
				|| ft_find_elem(*head, num) == true
				|| ft_check_num_exist(num, argv[cur]) == false)
			{
				ft_free_list(head);
				return (false);
			}
			ft_add_back(head, num);
			cur++;
		}
	}
	return (true);
}

bool	ft_check_sort(t_node *list)
{
	while (list != NULL && list->next != NULL)
	{
		if (list->elem > list->next->elem)
			return (false);
		list = list->next;
	}
	return (true);
}

void	ft_check_case(t_node **a_list, t_node **b_list)
{
	if (ft_count_elem(*a_list) == 2 && ft_check_sort(*a_list) == false)
		ft_sort_two_elem(&a_list);
	if (ft_count_elem(*a_list) == 3 && ft_check_sort(*a_list) == false)
		ft_sort_tree_elem(&a_list);
	if (ft_count_elem(*a_list) < 6 && ft_check_sort(*a_list) == false)
		ft_sort_five_elem(&a_list, &b_list);
	if (ft_count_elem(*a_list) > 5 && ft_check_sort(*a_list) == false)
		ft_sort_tons_elem(&a_list, &b_list);
}
