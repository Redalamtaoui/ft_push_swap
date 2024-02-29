/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:09:09 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:09:11 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sa(t_info *data, int flag)
{
	t_stack	*tmp;

	if (ft_strlen_lst(data, 'a') > 1)
	{
		tmp = data->head_stack_a->next;
		data->head_stack_a->next = data->head_stack_a->next->next;
		tmp->next = data->head_stack_a;
		data->head_stack_a = tmp;
	}
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	ft_sb(t_info *data, int flag)
{
	t_stack	*tmp;

	if (ft_strlen_lst(data, 'b') > 1)
	{
		tmp = data->head_stack_b->next;
		data->head_stack_b->next = data->head_stack_b->next->next;
		tmp->next = data->head_stack_b;
		data->head_stack_b = tmp;
	}
	if (flag == 1)
		write(1, "sb\n", 3);
}

void	ft_ss(t_info *data, int flag)
{
	ft_sa(data, 0);
	ft_sb(data, 0);
	if (flag == 1)
		write(1, "ss\n", 3);
}
