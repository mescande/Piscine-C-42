/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 12:20:15 by mescande          #+#    #+#             */
/*   Updated: 2017/07/19 11:17:22 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ret;

	ret = dest;
	while (n && *src)
	{
		*ret = *src;
		n--;
		ret++;
		src++;
	}
	while (n)
	{
		*ret = '\0';
		ret++;
		n--;
	}
	return (dest);
}
