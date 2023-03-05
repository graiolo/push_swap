/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:10:52 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/05 17:23:35 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <string.h>

typedef struct s_node
{
	struct s_node	**head;
	struct s_node	*next;
	size_t			index;
	int				elem;
}	t_node;

bool		ft_init_head(t_node ***head);
void		ft_free_list(t_node **head);

long int	ft_long_atoi(const char *str);
bool		ft_is_space(const char str);
bool		ft_is_number(const char str);

bool		ft_add_head(t_node **head, int elem);
bool		ft_rm_head(t_node **head);
bool		ft_add_back(t_node **head, int elem);
bool		ft_rm_back(t_node **head);

bool		ft_printf_list(t_node *list);
bool		ft_index_list(t_node *head);
void		ft_copy_list(t_node *old_list, t_node ***new_list);

bool		ft_find_elem(t_node *list, int elem);
size_t		ft_find_index(t_node *list, int elem);
int			ft_find_max(t_node *list);
int			ft_find_min(t_node *list);

size_t		ft_count_elem(t_node *list);
bool		ft_long_zero(t_node *list);
bool		ft_long_one(t_node *list);
bool		ft_long_two(t_node *list);

bool		ft_pa(t_node **list_a, t_node **list_b);
bool		ft_pb(t_node **list_a, t_node **list_b);

bool		ft_sa(t_node *list);
bool		ft_sb(t_node *list);
bool		ft_ss(t_node *list_a, t_node *list_b);

bool		ft_ra(t_node ***list);
bool		ft_rb(t_node ***list);
bool		ft_rr(t_node ***list_a, t_node ***list_b);

bool		ft_rfa(t_node ***list);
bool		ft_rfb(t_node ***list);
bool		ft_rrr(t_node ***list_a, t_node ***list_b);

bool		ft_check_valid(t_node **head, int argc, char **argv);
bool		ft_check_sort(t_node *list);
void		ft_check_case(t_node **a_list, t_node **b_list);
bool		ft_check_num_exist(int num, char *str);

void		ft_sort_two_elem(t_node ***head);

void		ft_sort_tree_elem(t_node ***head);
void		ft_case(int min, int mid, int max, t_node ***head);

void		ft_sort_five_elem(t_node ***a_head, t_node ***b_head);
void		ft_p_min(t_node ***a_head, t_node ***b_head);

void		ft_sort_tons_elem(t_node ***a_head, t_node ***b_head);
size_t		ft_count_elem_bits_form(t_node ***head);
size_t		ft_count_bits(int number);

void		ft_bubble_sort(t_node *head);
void		ft_swap_node(t_node *f_node, t_node *s_node);
void		ft_abs_list(t_node *head);

char		*ft_strjoin(char *old, char ch);
char		*ft_get_next_line(int fd);

char		**ft_split(char *str);
size_t		ft_count_split(char const *s);
void		ft_free_split(char **str);
bool		ft_split_args(char **argv, t_node ***head);
size_t		ft_strlen(const char *str);

#endif
