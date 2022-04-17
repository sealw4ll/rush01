/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:54:33 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 20:37:57 by soon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	ft_checkbottom(int col)
{
	int	view;
	int	i;
	int	total;

	total = 0;
	view = 0;
	i = g_n - 1;
	while (i >= 0)
	{
		if (g_box[i][col] > view)
		{
			view = g_box[i][col];
			total++;
		}
		i--;
	}
	if (total == g_i_array[1][col])
		return (1);
	else
		return (0);
}

int	ft_checktop(int col)
{
	int	view;
	int	i;
	int	total;

	total = 0;
	view = 0;
	i = 0;
	while (i < g_n)
	{
		if (g_box[i][col] > view)
		{
			view = g_box[i][col];
			total++;
		}
		i++;
	}
	if (total == g_i_array[0][col])
		return (1);
	else
		return (0);
}

int	ft_checkright(int row)
{
	int	view;
	int	j;
	int	total;

	total = 0;
	view = 0;
	j = g_n - 1;
	while (j >= 0)
	{
		if (g_box[row][j] > view)
		{
			view = g_box[row][j];
			total++;
		}
		j--;
	}
	if (total == g_i_array[3][row])
		return (1);
	else
		return (0);
}

int	ft_checkleft(int row)
{
	int	view;
	int	j;
	int	total;
	int	c;

	total = 0;
	view = 0;
	j = 0;
	while (j < g_n)
	{
		c = g_box[row][j];
		if (c > view)
		{
			view = c;
			total++;
		}
		j++;
	}
	if (total == g_i_array[2][row])
		return (1);
	else
		return (0);
}

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
