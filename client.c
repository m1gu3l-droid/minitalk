/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:50:12 by fnovais-          #+#    #+#             */
/*   Updated: 2023/02/14 17:27:24 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./library/minitalk.h"
#include <signal.h>
#include <sys/types.h>

static void	send_signal(char c, int server_id)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ((c & (1 << i)) == 0)
			kill(server_id, SIGUSR2);
		else
			kill(server_id, SIGUSR1);
		usleep(50);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	server_id;
	int	i;

	i = 0;	
	if (ac != 3)
	{
		ft_printf("Insert valid arguments: <server PID> and <message>\n");
		return (0);
	}
	server_id = ft_atoi(av[1]);
	while(*av[1])
	{
		if (ft_isdigit(*av[1]) == 0)
			ft_printf("ERROR: PID is not valid\n");
		av[1]++;
	}
	if (*av[2] == 0)
		ft_printf("ERROR: empty message\n");
	ft_printf("CLIENT PID: %d\n", getpid()); 
	while (av[2][i])
	{
		send_signal(av[2][i], server_id);
		ft_printf("%d ", i);
		i++;
	}
	send_signal('\n', server_id);
	return (0);
}
