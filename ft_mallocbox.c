/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mallocbox.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:11:40 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 17:38:37 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	**ft_mallocbox(void)
{
	int	i;

	i = 0;
	g_box = malloc(sizeof (int *) * g_n);
	while (i < g_n)
	{
		g_box[i] = malloc(sizeof (int) * g_n);
		i++;
	}
	return (g_box);
}
