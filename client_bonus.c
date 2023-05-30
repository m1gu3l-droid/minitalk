/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:33:00 by fnovais-          #+#    #+#             */
/*   Updated: 2023/03/01 12:30:23 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	delivery_message(int signal)
{
	if (signal == SIGUSR1)
		ft_printf("message received\n");
}

static void	talk_to_server(int id, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ((c & (1 << i)) == 0)
			kill(id, SIGUSR2);
		else
			kill(id, SIGUSR1);
		usleep(50);
		i++;
	}
}

static int	check_args(char **av)
{
	while (*av[1])
	{
		if (ft_isdigit(*av[1]) == 0)
		{
			ft_printf("error: <pid> not valid.\n");
			return (0);
		}
		av[1]++;
	}
	if (*av[2] == '\0')
	{
		ft_printf("error: no message to be sent.\n");
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	struct sigaction	sa;
	int					id;

	if (ac != 3)
	{
		ft_printf("error: wrong input, try <pid> and <message>.\n");
		return (0);
	}
	id = ft_atoi(av[1]);
	sa.sa_handler = &delivery_message;
	if (check_args(av))
	{
		while (*av[2])
		{
			sigaction(SIGUSR1, &sa, NULL);
			sigaction(SIGUSR2, &sa, NULL);
			talk_to_server(id, *av[2]++);
		}
		talk_to_server(id, *av[2]);
		talk_to_server(id, '\n');
	}
	return (0);
}
