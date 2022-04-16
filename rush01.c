/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:37:49 by wting             #+#    #+#             */
/*   Updated: 2022/04/16 22:14:54 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
int	ft_boxsize(char *input);
int	**createbox(int **box, int n);

int	**rush(char *input, int **box)
{
	int n;
	int i;

	n = ft_boxsize(input);

	box = createbox(box, n);

	return (box);	
}




