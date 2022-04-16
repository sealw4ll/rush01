/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbox.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:21:54 by wting             #+#    #+#             */
/*   Updated: 2022/04/16 18:54:06 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printbox(int **box, int n)
{
	int cx;
	int cy;

	cy = 0;
	while (cy < n)
	{
		cx = 0;
		while (cx < n)
		{
			box[cy][cx] = box[cy][cx] + 48;
			write(1, &box[cy][cx], 1);
			cx++;
		}
		write(1, '\n', 1);
		cy++
	}
}
