/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:11:05 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/29 13:57:27 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element_count, size_t element_size)
{
	void	*pointer;
	size_t	i;

	i = 0;
	pointer = (void *)malloc(element_count * element_size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, (element_count * element_size));
	return (pointer);
}
