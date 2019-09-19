/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 23:08:06 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/06 09:40:12 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = nb - 1;
	if (nb <= 1)
		return (0);
	while (i != 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}