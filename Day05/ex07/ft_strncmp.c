/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:05:29 by mescande          #+#    #+#             */
/*   Updated: 2017/07/12 16:14:14 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != 0)
	{
		if (s2[i] == 0 || s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == s2[i])
			i++;
		if (i == n)
			return (0);
	}
	if (s1[i] == 0 && s2[i] == 0)
		return (0);
	return (s1[i] - s2[i]);
}
