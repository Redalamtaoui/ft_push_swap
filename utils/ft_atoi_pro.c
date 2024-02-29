/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_pro.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:35:11 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:35:16 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_atoi(const char *nptr, t_info *data)
{
	long int	i;
	long int	sum;

	sum = 0;
	i = 1;
	if (*nptr == '\0')
		ft_error(data, 1);
	while ((*nptr == 32))
		nptr++;
	if ((*nptr == '-' || *nptr == '+') && *(nptr + 1) != '\0')
	{
		if (*nptr == '-')
			i = -i;
		nptr++;
	}
	while (*nptr)
	{
		if (*nptr < '0' || *nptr > '9')
			ft_error(data, 2);
		sum = (sum * 10) + *nptr - 48;
		nptr++;
	}
	data->value = (sum * i);
	if (data->value > 2147483647 || data->value < -2147483648)
		ft_error(data, 2);
}
