/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbox.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:21:54 by wting             #+#    #+#             */
/*   Updated: 2022/04/17 14:31:14 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

void	ft_printbox(int **b)
{
	int	cx;
	int	cy;

	cy = 0;
	while (cy < g_n)
	{
		cx = 0;
		while (cx < g_n)
		{
			b[cy][cx] = b[cy][cx] + 48;
			write(1, &b[cy][cx], 1);
			if (cx != g_n - 1)
				write(1, " ", 1);
			cx++;
		}
		write(1, "\n", 1);
		cy++;
	}
}
