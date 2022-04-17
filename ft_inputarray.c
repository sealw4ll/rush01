/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:39:35 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 17:38:37 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	**ft_inputarray(char *input)
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
			if (input[c] >= '1' && input[c] <= '9')
			{
				g_i_array[i][j] = (input[c] - 48);
				j++;
			}
			c++;
		}
		i++;
	}
	return (g_i_array);
}
