/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 21:44:19 by mescande          #+#    #+#             */
/*   Updated: 2017/07/11 12:15:06 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_decompo(int c)
{
	int a;

	if (c >= 10)
	{
		a = ft_decompo(c / 10);
		ft_putchar(c - (10 * a) + 48);
	}
	else
		ft_putchar(c + 48);
	return (c);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb = nb + 2000000000;
		nb = -nb;
		ft_putchar('-');
		ft_putchar('2');
	}
	else if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	ft_decompo(nb);
}
