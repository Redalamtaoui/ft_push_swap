/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:13:05 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:13:07 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	t_info	data;

	data.av_data = argv;
	if (argc >= 2)
	{
		parsing(&data);
		ft_sort_list(&data);
		ft_end(&data);
	}
	return (0);
}
