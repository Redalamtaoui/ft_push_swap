/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 04:07:03 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/26 04:07:05 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_3(t_info *data)
{
	if (data->size_arr == 2)
		ft_sa(data, 1);
	else if (ft_biger(data) == 1)
	{
		ft_ra(data, 1);
		if (data->head_stack_a->value > data->head_stack_a->next->value)
			ft_sa(data, 1);
	}
	else if (ft_biger(data) == 2)
	{
		if (data->head_stack_a->value > data->head_stack_a->next->next->value)
			ft_rra(data, 1);
		else
		{
			ft_sa(data, 1);
			ft_ra(data, 1);
		}
	}
	else if (data->head_stack_a->value > data->head_stack_a->next->value)
		ft_sa(data, 1);
	while (ft_strlen_lst(data, 'b') > 0)
		ft_pa(data, 1);
}

void	ft_sort_5(t_info *data)
{
	long	x;
	t_stack	*tmp;

	x = 0;
	while (ft_strlen_lst(data, 'a') > 3)
	{
		if (data->head_stack_a->i == x)
		{
			ft_pb(data, 1);
			x++;
		}
		tmp = data->head_stack_a;
		while (tmp != NULL)
		{
			if (x == tmp->i)
			{
				if (ft_cheak_position(data, x, data->head_stack_a, 'a') == 1)
					ft_ra(data, 1);
				else
					ft_rra(data, 1);
			}
			tmp = tmp->next;
		}
	}
	ft_sort_3(data);
}
