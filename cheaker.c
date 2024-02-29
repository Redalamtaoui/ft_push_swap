/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheaker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 03:59:05 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/26 03:59:06 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ex(t_info *data)
{
	write(2, "ERROR\n", 6);
	ft_end(data);
	exit(2);
}

void	ft_element(t_info *data, char *p)
{
	if (ft_strcmp("pa\n", p) == 0)
		ft_pa(data, 0);
	else if (ft_strcmp("pb\n", p) == 0)
		ft_pb(data, 0);
	else if (ft_strcmp("ra\n", p) == 0)
		ft_ra(data, 0);
	else if (ft_strcmp("rb\n", p) == 0)
		ft_rb(data, 0);
	else if (ft_strcmp("rr\n", p) == 0)
		ft_rr(data, 0);
	else if (ft_strcmp("sa\n", p) == 0)
		ft_sa(data, 0);
	else if (ft_strcmp("sb\n", p) == 0)
		ft_sb(data, 0);
	else if (ft_strcmp("ss\n", p) == 0)
		ft_ss(data, 0);
	else if (ft_strcmp("rra\n", p) == 0)
		ft_rra(data, 0);
	else if (ft_strcmp("rrb\n", p) == 0)
		ft_rrb(data, 0);
	else if (ft_strcmp("rrr\n", p) == 0)
		ft_rrr(data, 0);
	else
		ft_ex(data);
}

int	main(int argc, char **argv)
{
	t_info	data;
	char	*p;

	data.av_data = argv;
	if (argc >= 2)
	{
		parsing(&data);
		p = get_next_line(0);
		while (p)
		{
			ft_element(&data, p);
			free(p);
			p = get_next_line(0);
		}
		if (ft_is_sort(data.head_stack_a) == 1 && data.head_stack_b == NULL)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
		free(p);
		ft_end(&data);
	}
	return (0);
}
