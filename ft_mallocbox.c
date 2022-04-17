/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mallocbox.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:11:40 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 14:43:28 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "allft.h"

int	**ft_mallocbox()
{
	int	i;

	i = 0;
	box = malloc(sizeof (int *) * g_n);
	while (i < g_n)
	{
		box[i] = malloc(sizeof (int) * g_n);
		i++;
	}
	return (box);
}
