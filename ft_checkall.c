/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:38:29 by soon              #+#    #+#             */
/*   Updated: 2022/04/17 20:49:39 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	ft_directions(int row, int col, int x)
{
	int	res;

	g_box[row][col] = x;
	res = 1;
	if (col == g_n - 1)
	{
		if (ft_checkleft(row) == 0)
			res = 0;
		if (ft_checkright(row) == 0)
			res = 0;
	}
	if (row == g_n - 1)
	{
		if (ft_checktop(col) == 0)
			res = 0;
		if (ft_checkbottom(col) == 0)
			res = 0;
	}
	g_box[row][col] = 0;
	return (res);
}

int	ft_checkall(int row, int col, int x)
{
	int	j;

	j = 0;
	while (j < g_n)
	{
		if (g_box[row][j] == x)
			return (0);
		j++;
	}
	j = 0;
	while (j < g_n)
	{
		if (g_box[j][col] == x)
			return (0);
		j++;
	}
	if (ft_directions(row, col, x) == 0)
		return (0);
	return (1);
}
