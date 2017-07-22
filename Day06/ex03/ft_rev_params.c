/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 12:20:22 by mescande          #+#    #+#             */
/*   Updated: 2017/07/13 15:47:10 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int a;

	i = 0;
	a = 1;
	while (argc - a > 0)
	{
		while (argv[argc - a][i] != 0)
		{
			ft_putchar(argv[argc - a][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		a++;
	}
	return (0);
}
