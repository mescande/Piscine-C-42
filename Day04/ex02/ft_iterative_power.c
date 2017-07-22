/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 17:56:43 by mescande          #+#    #+#             */
/*   Updated: 2017/07/12 08:53:26 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int resultat;

	resultat = 1;
	if (power == 0)
		return (1);
	if (power < 1)
		return (0);
	while (power != 0)
	{
		resultat = resultat * nb;
		power--;
	}
	return (resultat);
}
