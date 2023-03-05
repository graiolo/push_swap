/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_del_head.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:23:55 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/02 19:38:40 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

bool	ft_init_head(t_node ***head)
{
	*head = NULL;
	*head = malloc(sizeof(head));
	if (*head == NULL)
		return (false);
	**head = NULL;
	return (true);
}

void	ft_free_list(t_node **head)
{
	while (*head != NULL)
		ft_rm_head(head);
	free(head);
}
