/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:06:51 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 15:20:10 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allft.h"

int	main(int argc, char *argv[])
{
	char	*input;

	input = argv[1];
	box = NULL;
	i_array = NULL;
	if (argc != 2)
	{
		write(1, "Error: no input.\n", 16);
		return (0);
	}
	g_n = ft_boxsize(input);
	box = ft_rush(input);
	ft_printbox(box);
	return (0);
}
