/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boxsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:37:49 by wting             #+#    #+#             */
/*   Updated: 2022/04/17 19:54:16 by wting            ###   ########.fr       */
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
		++i;
	}
	if ((count % 4) != 0 || count == 0)
	{
		write(1, "incorrect size", 14);
		write(1, "\n", 1);
		return (0);
	}
	count = (count / 4);
	return (count);
}
