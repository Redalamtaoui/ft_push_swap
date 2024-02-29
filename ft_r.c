/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:08:43 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:08:46 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ra(t_info *data, int flag)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (ft_strlen_lst(data, 'a') > 1)
	{
		tmp1 = data->head_stack_a;
		data->head_stack_a = data->head_stack_a->next;
		tmp2 = data->head_stack_a;
		while (tmp2->next != NULL)
			tmp2 = tmp2->next;
		tmp2->next = tmp1;
		tmp1->next = NULL;
	}
	if (flag == 1)
		write(1, "ra\n", 3);
}

void	ft_rb(t_info *data, int flag)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (ft_strlen_lst(data, 'b') > 1)
	{
		tmp1 = data->head_stack_b;
		data->head_stack_b = data->head_stack_b->next;
		tmp2 = data->head_stack_b;
		while (tmp2->next != NULL)
			tmp2 = tmp2->next;
		tmp2->next = tmp1;
		tmp1->next = NULL;
	}
	if (flag == 1)
		write(1, "rb\n", 3);
}

void	ft_rr(t_info *data, int flag)
{
	ft_rb(data, 0);
	ft_ra(data, 0);
	if (flag == 1)
		write(1, "rr\n", 3);
}
