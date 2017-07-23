/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 07:53:13 by mescande          #+#    #+#             */
/*   Updated: 2017/07/09 23:35:02 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_condition(int a, int b, int h, int l)
{
	if ((a == 1 && b == 1) || (a == h && b == 1))
		ft_putchar('o');
	else if (b == l && (a == 1 || a == h))
		ft_putchar('o');
	else if (b == 1 || b == l)
		ft_putchar('|');
	else if (a == 1 || a == h)
		ft_putchar('-');
	else
		ft_putchar(' ');
}


void	rush(int l, int h)
{
	int a;
	int b;
	int c;

	a = 1;
	b = 1;
	c = '\n';
	while (a <= h)
	{
		while (b <= l)
		{
			ft_condition(a, b, h, l);
			if (b == l)
				ft_putchar(c);
			b++;
		}
		a++;
		b = 1;
	}
}
