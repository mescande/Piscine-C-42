/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 17:01:32 by mescande          #+#    #+#             */
/*   Updated: 2017/07/12 08:46:57 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int resultat;

	if (nb == 0)
		return (1);
	if (nb < 1 || nb > 12)
		return (0);
	if (nb != 1)
		resultat = nb * ft_recursive_factorial(nb - 1);
	else
		resultat = 1;
	return (resultat);
}
