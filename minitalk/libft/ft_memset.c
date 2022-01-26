/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:16:24 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/29 14:01:21 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *sentence, int value, size_t count)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)sentence;
	i = 0;
	while (i < count)
	{
		str[i] = value;
		i++;
	}
	return (str);
}
