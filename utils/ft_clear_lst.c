/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:35:51 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:35:52 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	del(int *value)
{
	*value = 0;
}

void	ft_lstdelone(t_stack *lst, void (*del)(int *))
{
	if (!lst || !del)
		return ;
	del(&lst->value);
	free(lst);
	lst = NULL;
}

void	ft_lstclear(t_stack **lst, void (*del)(int *))
{
	t_stack	*tmp;

	if (!lst || !del || !(*lst))
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
