/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputarraysize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 08:04:33 by lchew             #+#    #+#             */
/*   Updated: 2022/04/18 17:34:27 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	**ft_inputarraysize(void)
{
	int	i;

	i = 0;
	g_i_array = malloc(sizeof (int *) * 4);
	while (i < 4)
	{
		g_i_array[i] = malloc(sizeof (int) * g_n);
		i++;
	}
	return (g_i_array);
}
