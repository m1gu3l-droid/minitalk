/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:50:08 by fnovais-          #+#    #+#             */
/*   Updated: 2023/02/14 17:27:40 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./library/minitalk.h"
#include <signal.h>
#include <sys/types.h>

static void	handle_signal(int signum)
{
	static int	c = 0;
	static int	bit = 0;

	if (signum == SIGUSR1)
		c |= 1 << bit;
	bit++;
	if (bit == 8)
	{
		write(1, &c, 1);
		bit = 0;
		c = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_handler = &handle_signal;
	ft_printf("SERVER PID: %d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		pause();
	}
}
