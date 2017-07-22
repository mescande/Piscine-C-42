/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 20:41:05 by mescande          #+#    #+#             */
/*   Updated: 2017/07/12 10:05:40 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive(int a, int i)
{
	if (a != 0)
	{
		a--;
		i++;
		i = ft_recursive(a, i);
	}
	return (i);
}

int		ft_eight_queens_puzzle(void)
{
	int nombre_possibilite;

	nombre_possibilite = ft_recursive(92, 0);
	return (nombre_possibilite);
}
