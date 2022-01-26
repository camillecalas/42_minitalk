/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:42:31 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/25 18:42:33 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "libft/libft.h"

void	ft_char_to_bits(char *str, pid_t process_id)
{
	int		i;
	int		bits;

	i = 0;
	while (str[i] != '\0')
	{
		bits = 8;
		while (bits != 0)
		{
			bits--;
			if (((str[i] >> bits) & 1) == 1)
			{
				kill(process_id, SIGUSR1);
				usleep(30);
			}	
			else if (((str[i] >> bits) & 1) == 0)
			{
				kill(process_id, SIGUSR2);
				usleep(30);
			}	
		}
		i++;
	}
}

int	main(int argc, char **argv)
{	
	char	*str2;
	int		process_id;

	str2 = "\n";
	if (argc != 3)
		return (1);
	process_id = ft_atoi(argv[1]);
	if (process_id <= 0)
		return (1);
	ft_char_to_bits(argv[2], process_id);
	ft_char_to_bits(str2, process_id);
	return (0);
}
