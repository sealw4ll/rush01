/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:06:51 by lchew             #+#    #+#             */
/*   Updated: 2022/04/18 10:09:50 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	main(int argc, char *argv[])
{
	g_input = argv[1];
	g_box = NULL;
	g_i_array = NULL;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_boxsize() == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	g_n = ft_boxsize();
	if (ft_rush() == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	g_box = ft_rush();
	ft_printbox(g_box);
	free(g_box);
	free(g_i_array);
	return (0);
}
