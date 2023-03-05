/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:28:37 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/05 21:51:40 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_checker.h"

int	main(int argc, char **argv)
{
	t_node	**a_list;
	t_node	**b_list;
	char	*moves;

	ft_init_head(&a_list);
	if (argc == 1 || ft_check_valid(a_list, argc, argv) == false)
		return (1);
	ft_init_head(&b_list);
	while (true)
	{
		moves = ft_get_next_line(0);
		if (moves != NULL)
			ft_make_moves(&a_list, &b_list, moves);
		else
			break ;
		free(moves);
	}
	if (ft_check_sort(*a_list) == true && ft_long_zero(*b_list) == true)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_free_list(a_list);
	ft_free_list(b_list);
	return (0);
}

void	ft_make_moves(t_node ***a_list, t_node ***b_list, char *moves)
{
	if (ft_strcmp(moves, "ra\n") == true)
		ft_ra_bonus(a_list);
	if (ft_strcmp(moves, "rb\n") == true)
		ft_rb_bonus(b_list);
	if (ft_strcmp(moves, "rr\n") == true)
		ft_rr_bonus(a_list, b_list);
	if (ft_strcmp(moves, "sa\n") == true)
		ft_sa_bonus(**a_list);
	if (ft_strcmp(moves, "sb\n") == true)
		ft_sb_bonus(**b_list);
	if (ft_strcmp(moves, "ss\n") == true)
		ft_ss_bonus(**a_list, **b_list);
	if (ft_strcmp(moves, "pa\n") == true)
		ft_pa_bonus(*b_list, *a_list);
	if (ft_strcmp(moves, "pb\n") == true)
		ft_pb_bonus(*a_list, *b_list);
	if (ft_strcmp(moves, "rra\n") == true)
		ft_rfa_bonus(a_list);
	if (ft_strcmp(moves, "rrb\n") == true)
		ft_rfb_bonus(b_list);
	if (ft_strcmp(moves, "rrr\n") == true)
		ft_rrr_bonus(a_list, b_list);
}

bool	ft_strcmp(const char *str1, const char *str2)
{
	size_t	ind;

	ind = 0;
	while (str1[ind] != 0 && str2[ind] != 0 && str1[ind] == str2[ind])
		ind++;
	if (str1[ind] == str2[ind])
		return (true);
	return (false);
}
