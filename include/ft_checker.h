/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:32:12 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/05 21:46:41 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECKER_H
# define FT_CHECKER_H

# include "ft_push_swap.h"
# include <stdbool.h>

bool		ft_pa_bonus(t_node **list_a, t_node **list_b);
bool		ft_pb_bonus(t_node **list_a, t_node **list_b);

bool		ft_sa_bonus(t_node *list);
bool		ft_sb_bonus(t_node *list);
bool		ft_ss_bonus(t_node *list_a, t_node *list_b);

bool		ft_ra_bonus(t_node ***list);
bool		ft_rb_bonus(t_node ***list);
bool		ft_rr_bonus(t_node ***list_a, t_node ***list_b);

bool		ft_rfa_bonus(t_node ***list);
bool		ft_rfb_bonus(t_node ***list);
bool		ft_rrr_bonus(t_node ***list_a, t_node ***list_b);

char		*ft_get_next_line(int fd);
char		*ft_strjoin(char *str, const char val);
void		ft_make_moves(t_node ***a_list, t_node ***b_list, char *moves);
bool		ft_strcmp(const char *str1, const char *str2);

#endif