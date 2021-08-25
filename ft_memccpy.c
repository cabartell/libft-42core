/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartell <cbartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:49:30 by cbartell          #+#    #+#             */
/*   Updated: 2021/06/12 14:37:30 by cbartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*srctemp;
	unsigned char	*desttemp;

	i = 0;
	srctemp = (unsigned char *)src;
	desttemp = (unsigned char *)dest;
	while (n > i)
	{
		desttemp[i] = srctemp[i];
		if (srctemp[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
