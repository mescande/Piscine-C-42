/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:17:14 by mescande          #+#    #+#             */
/*   Updated: 2017/07/12 10:02:45 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int a[2];
	int i;

	a[0] = 3;
	if (nb == 2)
		return (1);
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0)
		return (0);
	a[1] = nb / 2 + 2;
	i = 0;
	while (a[0] <= a[1])
	{
		if (nb % a[0] == 0)
			return (0);
		a[0] = a[0] + 2;
		i = i + 1;
		if (i == 3)
		{
			i = 1;
			a[0] = a[0] + 2;
		}
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int a;

	a = 0;
	nb = nb - 1;
	while (a == 0)
	{
		nb = nb + 1;
		a = ft_is_prime(nb);
	}
	return (nb);
}
