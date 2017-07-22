/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 22:19:54 by mescande          #+#    #+#             */
/*   Updated: 2017/07/11 17:32:59 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *ptr)
{
	int fin;
	int debut;
	int save;

	fin = 0;
	debut = 0;
	while (ptr[fin] != 0)
		fin++;
	fin--;
	while (debut <= fin)
	{
		save = ptr[debut];
		ptr[debut] = ptr[fin];
		ptr[fin] = save;
		debut++;
		fin--;
	}
	return (ptr);
}
