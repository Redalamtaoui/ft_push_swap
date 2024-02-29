/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:36:04 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:36:06 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lst_add_back(t_stack **stack_a, t_stack *node)
{
	t_stack	*tmp;

	tmp = *stack_a;
	if (stack_a == NULL || node == NULL)
		exit(2);
	if (*stack_a == NULL)
		*stack_a = node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}
}
