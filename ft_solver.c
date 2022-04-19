/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:45:45 by wting             #+#    #+#             */
/*   Updated: 2022/04/17 23:19:04 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	ft_solver(int row, int col)
{
	int	x;

	x = 1;
	if (row == g_n - 1 && col == g_n)
		return (1);
	if (col == g_n)
	{
		row++;
		col = 0;
	}
	while (x <= g_n)
	{
		if (ft_checkall(row, col, x) == 1)
		{
			g_box[row][col] = x;
			if (ft_solver(row, col + 1) == 1)
				return (1);
		}
		g_box[row][col] = 0;
		x++;
	}
	return (0);
}
