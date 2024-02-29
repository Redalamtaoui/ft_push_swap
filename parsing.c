/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:12:52 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:12:54 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check_full(t_info *data)
{
	char	*tmp;
	char	*tmp2;

	while (data->av_data[data->x_index_str])
	{
		while (data->av_data[data->x_index_str][data->var_x] == ' ')
			data->var_x++;
		if (data->av_data[data->x_index_str][data->var_x] == '\0')
			ft_error(data, 1);
		tmp = data->str;
		if (data->av_data[data->x_index_str][0] == '\0')
			ft_error(data, 1);
		data->str = ft_strjoin(data->str, data->av_data[data->x_index_str]);
		tmp2 = data->str;
		data->str = ft_strjoin(data->str, " ");
		free(tmp);
		free(tmp2);
		data->x_index_str++;
		data->var_x = 0;
	}
	data->av_data = ft_split(data->str, ' ');
	data->x_index_str = 0;
}

long	ft_strlen_lst(t_info *data, char name_stack)
{
	t_stack	*lst;
	long	count;

	count = 0;
	if (name_stack == 'a' && data->head_stack_a != NULL)
	{
		lst = data->head_stack_a;
		while (lst)
		{
			lst = lst->next;
			count++;
		}
	}
	if (name_stack == 'b' && data->head_stack_b != NULL)
	{
		lst = data->head_stack_b;
		while (lst)
		{
			lst = lst->next;
			count++;
		}
	}
	return (count);
}

void	ft_sort_arr(int *arr, int size)
{
	int	x;
	int	y;
	int	tmp;

	x = 0;
	while (x < size)
	{
		y = x + 1;
		while (y < size)
		{
			if (arr[x] > arr[y])
			{
				tmp = arr[x];
				arr[x] = arr[y];
				arr[y] = tmp;
			}
			y++;
		}
		x++;
	}
}

void	parsing(t_info *data)
{
	ft_intial(data);
	ft_check_full(data);
	while (data->av_data[data->x_index_str])
		data->x_index_str++;
	data->sort_array = malloc(data->x_index_str * sizeof(int));
	data->node = malloc(data->x_index_str * sizeof(t_stack *));
	data->size_arr = data->x_index_str;
	data->x_index_str = 0;
	while (data->av_data[data->x_index_str])
	{
		ft_atoi(data->av_data[data->x_index_str], data);
		data->node[data->x_index_str] = ft_lstnew(&data->value, data);
		data->sort_array[data->x_index_str] = data->value;
		ft_lst_add_back(&data->head_stack_a, data->node[data->x_index_str]);
		data->x_index_str++;
	}
	ft_sort_arr(data->sort_array, data->size_arr);
}
