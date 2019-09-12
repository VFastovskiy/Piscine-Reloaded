/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:05:59 by kcharlet          #+#    #+#             */
/*   Updated: 2019/09/09 21:56:35 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *str;
	int i;
	int j;

	if (min >= max || min < -2147483648)
		return (NULL);
	else if (max > 2147483647)
		return (NULL);
	else
	{
		j = min;
		str = (int*)malloc((max - min) * sizeof(*str));
		i = 0;
		while (i < (max - min))
		{
			str[i] = j;
			j++;
			i++;
		}
	}
	return (str);
}
