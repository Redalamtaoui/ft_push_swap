/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:09:25 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:09:27 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_other_2(t_info *data)
{
	data->size_arr--;
	while (data->size_arr != -1)
	{
		if (data->sort_array[data->size_arr] == data->head_stack_b->value)
		{
			ft_pa(data, 1);
			data->size_arr--;
		}
		else if (ft_cheak_position(data, data->size_arr, data->head_stack_b,
				'b') == 1)
			ft_rb(data, 1);
		else
			ft_rrb(data, 1);
	}
}

void	ft_rr_or_r(t_info *data, int x, int y)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = data->head_stack_a;
	while (tmp != NULL)
	{
		if (tmp->i <= x || tmp->i <= x + y)
			break ;
		i++;
		tmp = tmp->next;
	}
	if (i <= ft_strlen_lst(data, 'a') / 2)
		ft_ra(data, 1);
	else
		ft_rra(data, 1);
}

void	ft_sort_other(t_info *data)
{
	int	x;
	int	y;

	x = 0;
	y = (15.0 / 400) * data->size_arr + (15 - 15 / 4);
	while (x < data->size_arr)
	{
		if (data->head_stack_a->i <= x)
		{
			ft_pb(data, 1);
			ft_rb(data, 1);
			x++;
		}
		else if (data->head_stack_a->i <= x + y)
		{
			ft_pb(data, 1);
			x++;
		}
		else
			ft_rr_or_r(data, x, y);
	}
	ft_sort_other_2(data);
}

void	ft_sort_list(t_info *data)
{
	ft_index(data);
	if (ft_is_sort(data->head_stack_a) == 1)
		return ;
	if (data->size_arr <= 3)
		ft_sort_3(data);
	else if (data->size_arr <= 5)
		ft_sort_5(data);
	else
		ft_sort_other(data);
}
