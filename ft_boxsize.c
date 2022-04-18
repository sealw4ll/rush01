/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boxsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:37:49 by wting             #+#    #+#             */
/*   Updated: 2022/04/18 10:08:29 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	ft_boxsize(void)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (g_input[i] != '\0')
	{
		if (g_input[i] >= '1' && g_input[i] <= '9')
			++count;
		if (i % 2 == 1 && g_input[i] != ' ')
			return (0);
		if (i % 2 == 0 && (g_input[i] < '1' || g_input[i] > '9'))
			return (0);
		i++;
	}
	if ((count % 4) != 0 || count == 0)
		return (0);
	count = (count / 4);
	return (count);
}
