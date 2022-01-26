/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:48:38 by ccalas            #+#    #+#             */
/*   Updated: 2021/12/01 13:36:32 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	char		temp;
	char		*dst;
	const char	*src;

	dst = (char *)dest;
	src = (char *)source;
	if (!src && !dst)
		return (NULL);
	if (src < dst)
	{
		while (n > 0)
		{
			temp = src[n - 1];
			dst[n - 1] = temp;
			n--;
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
