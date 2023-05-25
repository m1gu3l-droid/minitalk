/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:33:00 by fnovais-          #+#    #+#             */
/*   Updated: 2023/03/01 12:29:34 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk.h" 

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

static int	check_args(int ac, char **av)
{
	if (ac != 3)
	{
		ft_printf("error: wrong input, try <pid> and <message>.\n");
		return (0);
	}
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
	int	id;

	id = ft_atoi(av[1]);
	if (check_args(ac, av))
	{
		ft_printf("CLIENT PID: %d\n", getpid());
		while (*av[2])
			talk_to_server(id, *av[2]++);
	}
	return (0);
}
