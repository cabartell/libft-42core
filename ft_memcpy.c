/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartell <cbartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:43:42 by cbartell          #+#    #+#             */
/*   Updated: 2021/06/08 20:24:38 by cbartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
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
		i++;
	}
	return (dest);
}
