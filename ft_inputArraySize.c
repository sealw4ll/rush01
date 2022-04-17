/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputArraySize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 08:04:33 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 08:06:02 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	**ft_inputArraySize(int **i_array, int n)
{
	int i;
	
	i = 0;
	i_array = malloc(sizeof(int *)*4);
	while (i < n)
	{
		i_array[i] = malloc(sizeof(int)*n);
		i++;
	}
	return (i_array);
}