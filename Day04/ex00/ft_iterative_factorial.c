/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 17:01:32 by mescande          #+#    #+#             */
/*   Updated: 2017/07/12 08:47:13 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int resultat;

	resultat = 1;
	if (nb == 0)
		return (1);
	else if (nb < 1 || nb > 12)
		return (0);
	while (nb != 1)
	{
		resultat = resultat * nb;
		nb--;
	}
	return (resultat);
}
