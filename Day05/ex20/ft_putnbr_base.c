/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 21:44:19 by mescande          #+#    #+#             */
/*   Updated: 2017/07/19 19:42:07 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

int		ft_test_base(char *base)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (base[a] != 0)
	{
		if (base[a] == '+' || base[a] == '-')
			return (1);
		while (base[i] != 0)
		{
			if (base[i] == base[a] && a != i)
				return (1);
			i++;
		}
		a++;
		i = a;
	}
	return (0);
}

int		ft_putnbr_base_neg(int nbr, int *nbrenbase, int lengbase)
{
	int i;

	i = 0;
	ft_putchar('-');
	while (nbr != 0)
	{
		nbrenbase[i] = -nbr - (lengbase * -(nbr / lengbase));
		nbr = nbr / lengbase;
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int nbrenbase[31];
	int lengbase;
	int i;

	i = 0;
	lengbase = 0;
	while (base[lengbase] != 0)
		lengbase++;
	if (ft_test_base(base) == 1 || lengbase < 2)
		return ;
	if (lengbase > 1)
	{
		(nbr < 0) ? i = ft_putnbr_base_neg(nbr, nbrenbase, lengbase) : 0;
		while (nbr > 0)
		{
			nbrenbase[i] = nbr - (lengbase * (nbr / lengbase));
			nbr = nbr / lengbase;
			i++;
		}
		(nbr == 0) ? ft_putchar(base[0]) : 0;
	}
	while (--i >= 0)
		ft_putchar(base[nbrenbase[i]]);
	return ;
}
