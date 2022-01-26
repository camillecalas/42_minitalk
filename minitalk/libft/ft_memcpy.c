/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:51:22 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/25 14:08:45 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t size)
{
	char		*dst;
	const char	*src;
	size_t		i;

	dst = (char *)dest;
	src = (char *)source;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
