/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:39:35 by lchew             #+#    #+#             */
/*   Updated: 2022/04/18 10:08:48 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	**ft_inputarray(void)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	g_i_array = ft_inputarraysize();
	while (i < 4)
	{
		j = 0;
		while (j < g_n)
		{
			if (g_input[c] >= '1' && g_input[c] <= '9')
			{
				g_i_array[i][j] = (g_input[c] - 48);
				j++;
			}
			c++;
		}
		i++;
	}
	return (g_i_array);
}
