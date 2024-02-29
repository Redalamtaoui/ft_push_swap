/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new_pro.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:38:08 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:38:09 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_check_repet(long *content, t_info *data)
{
	long	x;

	x = 0;
	while (x < data->x_index_str)
	{
		if (data->node[x]->value == *content)
			ft_error(data, 2);
		x++;
	}
}

t_stack	*ft_lstnew(long *content, t_info *data)
{
	t_stack	*node;

	ft_check_repet(content, data);
	node = malloc(sizeof(t_stack));
	if (node == NULL)
		ft_error(data, 2);
	node->value = *content;
	node->next = NULL;
	return (node);
}
