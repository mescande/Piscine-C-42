/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:52:09 by mescande          #+#    #+#             */
/*   Updated: 2017/07/12 19:19:16 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (dest[c] != 0)
		c++;
	while (src[i] != 0 && i < nb)
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = 0;
	return (dest);
}
