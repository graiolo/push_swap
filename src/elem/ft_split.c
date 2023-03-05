/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:25:28 by graiolo           #+#    #+#             */
/*   Updated: 2023/03/04 23:08:16 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_push_swap.h"

size_t	ft_count_split(char const *s)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 1;
	while (s[i] != 0)
	{
		if (s[i] == ' ' && s[i + 1] && s[i + 1] != ' ')
			n++;
		i++;
	}
	if (s[0] == 0)
		n = 0;
	return (n);
}

char	**ft_split(char *str)
{
	char	**split;
	char	*copy;
	size_t	ind;
	size_t	cc;

	ind = 0;
	split = (char **)malloc((ft_count_split(str) + 1) * sizeof(char *));
	copy = strtok(str, " ");
	while (copy != NULL)
	{
		cc = 0;
		split[ind] = (char *)malloc(ft_strlen(copy) + 1);
		while (copy[cc] != 0)
		{
			split[ind][cc] = copy[cc];
			cc++;
		}
		split[ind][cc] = 0;
		ind++;
		copy = strtok(NULL, " ");
	}
	split[ind] = NULL;
	return (split);
}

bool	ft_split_args(char **argv, t_node ***head)
{
	char	**args;
	size_t	ind;
	int		num;

	ind = 0;
	args = ft_split(argv[1]);
	while (args[ind] != NULL)
	{
		num = ft_long_atoi(args[ind]);
		if (ft_strlen(args[ind]) > 10 || num < INT_MIN || num > INT_MAX
			|| ft_find_elem(**head, num) == true
			|| ft_check_num_exist(num, args[ind]) == false)
		{
			ft_free_split(args);
			ft_free_list(*head);
			return (false);
		}
		ft_add_back(*head, num);
		ind++;
	}
	ft_free_split(args);
	return (true);
}

void	ft_free_split(char **str)
{
	size_t	ind;

	ind = 0;
	while (str[ind] != NULL)
		free(str[ind++]);
	free(str);
}

size_t	ft_strlen(const char *str)
{
	size_t	cur;

	cur = 0;
	while (*(str++))
		cur++;
	return (cur);
}
