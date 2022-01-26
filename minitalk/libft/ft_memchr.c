/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:38:51 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/25 11:05:33 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memory_block, int search_char, size_t size)
{
	unsigned char	*str;
	unsigned char	c;
	size_t			i;

	str = (unsigned char *)memory_block;
	c = (unsigned char)search_char;
	i = 0;
	while (i < size)
	{
		if (str[i] == c)
			return ((void *) str + i);
		i++;
	}
	return (NULL);
}
