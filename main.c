/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:06:51 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 20:43:54 by soon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	main(int argc, char *argv[])
{
	char	*input;

	input = argv[1];
	g_box = NULL;
	g_i_array = NULL;
	if (argc != 2)
	{
		write(1, "Error: no input.\n", 16);
		return (0);
	}
	g_n = ft_boxsize(input);
	if (ft_rush(input) == 0)
		write(1, "error", 5);
	else
	{
		g_box = ft_rush(input);
		ft_printbox(g_box);
	}
	return (0);
}
