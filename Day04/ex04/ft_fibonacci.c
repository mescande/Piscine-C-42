/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 18:28:33 by mescande          #+#    #+#             */
/*   Updated: 2017/07/12 09:31:20 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	int a;

	index++;
	if (index > 2)
	{
		a = ft_fibonacci(index - 2) + ft_fibonacci(index - 3);
		return (a);
	}
	if (index == 1)
		return (0);
	if (index == 2)
		return (1);
	else
		return (-1);
}
