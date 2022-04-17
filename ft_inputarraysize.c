/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputarraysize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 08:04:33 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 15:27:12 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	**ft_inputarraysize(void)
{
	int	i;

	i = 0;
	i_array = malloc(sizeof (int *) * 4);
	while (i < g_n)
	{
		i_array[i] = malloc(sizeof (int) * g_n);
		i++;
	}
	return (i_array);
}
