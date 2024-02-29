/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:24:24 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:26:56 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_sort(t_stack *tmp)
{
	long	x;

	if (tmp == NULL)
		return (0);
	x = tmp->value;
	while (tmp != NULL)
	{
		if (x > tmp->value)
			return (0);
		x = tmp->value;
		tmp = tmp->next;
	}
	return (1);
}

int	ft_biger(t_info *data)
{
	if (data->head_stack_a->value > data->head_stack_a->next->value
		&& data->head_stack_a->value > data->head_stack_a->next->next->value)
		return (1);
	else if (data->head_stack_a->next->value > data->head_stack_a->value
		&&\
		data->head_stack_a->next->value > data->head_stack_a->next->next->value)
		return (2);
	return (3);
}

void	ft_index(t_info *data)
{
	int		i;
	int		j;
	t_stack	*tmp;

	i = 0;
	j = 0;
	tmp = data->head_stack_a;
	while (tmp != NULL)
	{
		j = 0;
		while (j < data->size_arr)
		{
			if (data->sort_array[j] == tmp->value)
			{
				tmp->i = j;
				break ;
			}
			j++;
		}
		tmp = tmp->next;
	}
}

int	ft_cheak_position(t_info *data, int i, t_stack *tmp, char c)
{
	int	top;
	int	down;

	top = 1;
	down = 1;
	while (ft_strlen_lst(data, c) > 0 && tmp != NULL
		&& tmp->value != data->sort_array[i])
	{
		tmp = tmp->next;
		top++;
	}
	if (tmp != NULL)
		tmp = tmp->next;
	while (ft_strlen_lst(data, c) > 0 && tmp != NULL)
	{
		tmp = tmp->next;
		down++;
	}
	down += 1;
	if (top <= down)
		return (1);
	return (0);
}
