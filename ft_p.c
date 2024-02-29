/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:58:30 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 20:58:32 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_pa(t_info *data, int flag)
{
	t_stack	*tmp;

	if (ft_strlen_lst(data, 'b') > 0)
	{
		tmp = data->head_stack_b->next;
		ft_lstadd_front(&data->head_stack_a, data->head_stack_b);
		data->head_stack_b = tmp;
	}
	if (flag == 1)
		write(1, "pa\n", 3);
}

void	ft_pb(t_info *data, int flag)
{
	t_stack	*tmp;

	if (ft_strlen_lst(data, 'a') > 0)
	{
		tmp = data->head_stack_a->next;
		ft_lstadd_front(&data->head_stack_b, data->head_stack_a);
		data->head_stack_a = tmp;
	}
	if (flag == 1)
		write(1, "pb\n", 3);
}
