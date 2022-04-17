/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boxsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:37:49 by wting             #+#    #+#             */
/*   Updated: 2022/04/17 22:03:50 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	ft_boxsize(char *input)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (input[i] != '\0')
	{
		if (input[i] >= '1' && input[i] <= '9')
			++count;
		if (i % 2 == 1 && input[i] != ' ')
			return (0);
		if (i % 2 == 0 && (input[i] < '1' || input[i] > '9'))
			return (0);
		i++;
	}
	if ((count % 4) != 0 || count == 0)
		return (0);
	count = (count / 4);
	return (count);
}
