/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:42:41 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/25 18:42:43 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "libft/libft.h"

void	handler(int sig)
{	
	static int	binary = 128;
	static char	c = 0;

	if (sig == SIGUSR1)
	{
		c = c + binary;
		binary = binary / 2;
	}
	if (sig == SIGUSR2)
		binary = binary / 2;
	if (binary < 1)
	{
		if (c == 0)
			write(1, "\n", 1);
		write(1, &c, 1);
		c = 0;
		binary = 128;
	}	
}

int	main(void)
{
	pid_t	process_id;

	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	process_id = getpid();
	write(1, "PID: ", 5);
	ft_putnbr_fd(process_id, 1);
	write(1, "\n", 1);
	while (1)
		pause();
	return (0);
}
