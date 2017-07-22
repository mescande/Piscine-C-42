/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 18:10:27 by mescande          #+#    #+#             */
/*   Updated: 2017/07/10 18:26:36 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		resultat;

	if (power > 0)
	{
		power--;
		resultat = nb * ft_recursive_power(nb, power);
		return (resultat);
	}
	if (power == 0)
		return (1);
	return (0);
}
