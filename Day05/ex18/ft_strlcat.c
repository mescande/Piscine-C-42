/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:52:09 by mescande          #+#    #+#             */
/*   Updated: 2017/07/19 11:53:01 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	dlen;

	n = 0;
	dlen = ft_strlen(dest);
	while (src[n] && size > 0 && dlen + n < size - 1)
	{
		dest[dlen + n] = src[n];
		n++;
	}
	dest[dlen + n] = '\0';
	if (size < dlen + n)
		return (size + ft_strlen(src));
	return (dlen + ft_strlen(src));
}
