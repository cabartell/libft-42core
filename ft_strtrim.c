/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartell <cbartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 19:23:46 by cbartell          #+#    #+#             */
/*   Updated: 2021/05/29 15:38:39 by cbartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	char	*dest;

	if (!(s1 && set))
		return (NULL);
	front = 0;
	back = ft_strlen(s1);
	while (s1[front] && ft_strchr(set, s1[front]))
		front++;
	while (s1[back - 1] && ft_strchr(set, s1[back - 1]) && back > front)
		back--;
	dest = malloc(sizeof(char) * (back - front + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, &s1[front], back - front + 1);
	return (dest);
}
