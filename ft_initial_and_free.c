/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initial_and_free.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:57:57 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 20:58:00 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(t_info *data, int num_error)
{
	long	x;

	x = 0;
	write(2, "Error\n", 6);
	if (num_error == 1)
	{
		free(data->str);
		exit(2);
	}
	if (num_error == 2)
	{
		ft_lstclear(&data->head_stack_a, del);
		while (data->av_data[x])
		{
			free(data->av_data[x]);
			x++;
		}
		free(data->sort_array);
		free(data->node);
		free(data->av_data);
		free(data->str);
		exit(2);
	}
}

void	ft_intial(t_info *data)
{
	data->head_stack_a = NULL;
	data->head_stack_b = NULL;
	data->x_index_str = 1;
	data->str = NULL;
	data->var_x = 0;
	data->fl = 0;
}

void	ft_end(t_info *data)
{
	ft_lstclear(&data->head_stack_a, del);
	ft_lstclear(&data->head_stack_b, del);
	data->x_index_str = 0;
	free(data->sort_array);
	while (data->av_data[data->x_index_str])
	{
		free(data->av_data[data->x_index_str]);
		data->x_index_str++;
	}
	free(data->node);
	free(data->av_data);
	free(data->str);
}
