/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputArraySize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 08:04:33 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 11:24:18 by soon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ft_inputarraysize(int **i_array, int n)
{
	int	i;

	i = 0;
	i_array = malloc(sizeof (int *) * 4);
	while (i < n)
	{
		i_array[i] = malloc(sizeof (int) * n);
		i++;
	}
	return (i_array);
}
