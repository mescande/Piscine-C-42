/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 10:43:38 by mescande          #+#    #+#             */
/*   Updated: 2017/07/17 08:44:02 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int a;
	int save;
	int descente;

	descente = size - 1;
	while (descente >= 0)
	{
		a = descente;
		while (tab[a] > tab[a + 1] && a < size)
		{
			save = tab[a + 1];
			tab[a + 1] = tab[a];
			tab[a] = save;
			a++;
		}
		descente--;
	}
}
