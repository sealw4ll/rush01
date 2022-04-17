/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputArray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:39:35 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 11:20:38 by soon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	**ft_inputarraysize(int **i_array, int n);

int	**ft_inputarray(int **i_array, char *input, int n)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	i_array = ft_inputarraysize(i_array, n);
	while (i < 4)
	{
		j = 0;
		while (j < n)
		{
			if (input[c] >= '1' && input[c] <= '9')
			{
				i_array[i][j] = (input[c] - 48);
				j++;
			}
			c++;
		}
		i++;
	}
	return (i_array);
}
