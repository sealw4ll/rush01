/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:37:49 by wting             #+#    #+#             */
/*   Updated: 2022/04/17 09:17:27 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	**ft_mallocBox(int **box, int n);
int	**ft_inputArray(int **i_array, char *input, int n);

int	**ft_rush(char *input, int **box, int **i_array, int n)
{
	int	i;
	int	j;

	i = 0;
	box = ft_mallocBox(box, n);
	i_array = ft_inputArray(i_array, input, n);

	i_array[3][j] i_array[4][j]
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			box[i][j]++;
			box[i][j] = ft_rowValid(i_array, box, &i, &j);
			j++;
		}
	}

	return (box);	
}




