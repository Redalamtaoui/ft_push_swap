/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:08:56 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:08:57 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rra(t_info *data, int flag)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (ft_strlen_lst(data, 'a') > 1)
	{
		tmp2 = data->head_stack_a;
		while (tmp2->next->next != NULL)
			tmp2 = tmp2->next;
		tmp1 = tmp2;
		tmp2 = tmp2->next;
		tmp2->next = data->head_stack_a;
		data->head_stack_a = tmp2;
		tmp1->next = NULL;
	}
	if (flag == 1)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_info *data, int flag)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (ft_strlen_lst(data, 'b') > 1)
	{
		tmp2 = data->head_stack_b;
		while (tmp2->next->next != NULL)
			tmp2 = tmp2->next;
		tmp1 = tmp2;
		tmp2 = tmp2->next;
		tmp2->next = data->head_stack_b;
		data->head_stack_b = tmp2;
		tmp1->next = NULL;
	}
	if (flag == 1)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_info *data, int flag)
{
	ft_rrb(data, 0);
	ft_rra(data, 0);
	if (flag == 1)
		write(1, "rrr\n", 4);
}
