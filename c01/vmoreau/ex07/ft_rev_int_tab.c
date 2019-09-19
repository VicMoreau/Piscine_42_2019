/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 16:11:38 by vmoreau           #+#    #+#             */
/*   Updated: 2019/08/31 00:47:17 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tab2[size];

	i = 0;
	j = size - 1;
	while (i < size)
	{
		tab2[j] = tab[i];
		i++;
		j--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tab2[i];
		i++;
	}
}
