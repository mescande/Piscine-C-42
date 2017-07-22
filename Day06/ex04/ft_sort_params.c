/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 12:20:22 by mescande          #+#    #+#             */
/*   Updated: 2017/07/20 08:15:39 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_arg(int argc, char **argv)
{
	int a;
	int i;

	a = 1;
	i = 0;
	while (a < argc)
	{
		while (argv[a][i] != 0)
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		a++;
	}
}

int		ft_exchange(char **argv, int count)
{
	char *tableau;

	tableau = argv[count];
	argv[count] = argv[count + 1];
	argv[count + 1] = tableau;
	return (count++);
}

int		main(int argc, char **argv)
{
	int		i;
	int		count;

	count = argc - 2;
	while (count > 0)
	{
		i = 0;
		while (argv[count][0] > argv[count + 1][0] && count < argc - 1)
			count = ft_exchange(argv, count);
		while (argv[count][i] == argv[count + 1][i] && count < argc - 1)
		{
			i++;
			if (argv[count][i] > argv[count + 1][i])
			{
				count = ft_exchange(argv, count);
				break ;
			}
		}
		count--;
	}
	ft_print_arg(argc, argv);
	return (0);
}
