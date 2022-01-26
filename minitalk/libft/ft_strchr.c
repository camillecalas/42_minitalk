/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:25:55 by ccalas            #+#    #+#             */
/*   Updated: 2021/12/01 11:58:52 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int to_find_char)
{
	while (*str && *str != (char)to_find_char)
		str++;
	if (*str == (char)to_find_char)
		return ((char *)str);
	return (NULL);
}
