/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:29:43 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/25 18:42:49 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

/* LIBRAIRIES */
# include <sys/types.h> 
# include <unistd.h> 
# include <signal.h>
# include <stdlib.h>
# include <stdint.h>

/* TYPE BOOLEEN */
typedef enum Bool
{
	false,
	true
}	t_Bool;

/* PROTOTYPES DES FONCTIONS */
void	handler(int sig);
void	ft_char_to_bits(char *str, int process_id);
int		ft_check_isdigit(char **argv, int i);

#endif
