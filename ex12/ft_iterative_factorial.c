/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:07:15 by kcharlet          #+#    #+#             */
/*   Updated: 2019/09/08 18:29:33 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
	{
		res = 1;
		while (nb >= 1)
		{
			res = res * nb;
			nb--;
		}
		return (res);
	}
}
