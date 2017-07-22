/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 09:20:54 by mescande          #+#    #+#             */
/*   Updated: 2017/07/19 16:57:32 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	while (a < size - 1 && src[a] != 0)
	{
		dest[a] = src[a];
		a++;
	}
	b = a;
	while (dest[b] != 0)
	{
		dest[b] = 0;
		b++;
	}
	while (src[a] != 0)
		a++;
	return (a);
}
