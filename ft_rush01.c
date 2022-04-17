/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:37:49 by wting             #+#    #+#             */
/*   Updated: 2022/04/17 12:02:17 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush01Functions.h"

int	**ft_rush(char *input, int **box, int **i_array, int n)
{
	int	i;
	//int	j;

	i = 0;
	box = ft_mallocBox(box, n);
	i_array = ft_inputArray(i_array, input, n);

	//while (i < n)
	//{

	//}

	return (box);	
}




