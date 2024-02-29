/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:37:04 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:37:05 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	size_t	y;
	size_t	x;

	if (!s1 && !s2)
		return (ft_calloc(1, sizeof(char)));
	if (!s1 && s2)
		ptr = malloc((ft_strlen(s2) + 1) * sizeof(char));
	else if (s1 && !s2)
		ptr = malloc((ft_strlen(s1) + 1) * sizeof(char));
	else
		ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	x = 0;
	y = 0;
	while (s1 && s1[x])
		ptr[y++] = s1[x++];
	x = 0;
	while (s2 && s2[x])
		ptr[y++] = s2[x++];
	ptr[y] = '\0';
	return (ptr);
}
