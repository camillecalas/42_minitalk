/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:35:52 by ccalas            #+#    #+#             */
/*   Updated: 2021/12/01 13:37:29 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *string, int to_find_char)
{
	char	*str;
	char	c;
	int		len;

	str = (char *)string;
	c = (char)to_find_char;
	len = ft_strlen(str);
	while (len >= 0 && str[len] != c)
		len--;
	if (str[len] == c)
		return ((char *)str + len);
	return (NULL);
}
