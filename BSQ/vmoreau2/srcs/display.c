/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:43:07 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/18 10:47:18 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

void		ft_display(char **grid)
{
	int i;

	i = 0;
	while (grid[i])
	{
		ft_putstr(grid[i]);
		ft_putchar('\n');
		i++;
	}
}