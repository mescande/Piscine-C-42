/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:57:28 by mescande          #+#    #+#             */
/*   Updated: 2017/07/12 17:28:03 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_cap(char *str, int i)
{
	str[i] = str[i] - 32;
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int cap;

	i = 0;
	cap = 1;
	*str = *ft_strlowcase(str);
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z' && cap == 1)
			cap = ft_cap(str, i);
		i++;
		cap = 0;
		if (str[i - 1] > 'z' || str[i - 1] < 'a')
		{
			if (str[i] >= 'a' && str[i] < 'z')
				cap = 1;
			else
				cap = 0;
		}
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
			cap = 0;
		if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			cap = 0;
	}
	return (str);
}
