/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputarraysize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 08:04:33 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 17:38:37 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	**ft_inputarraysize(void)
{
	int	i;

	i = 0;
	g_i_array = malloc(sizeof (int *) * 4);
	while (i < g_n)
	{
		g_i_array[i] = malloc(sizeof (int) * g_n);
		i++;
	}
	return (g_i_array);
}
