/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:37:49 by wting             #+#    #+#             */
/*   Updated: 2022/04/16 18:47:46 by lchew            ###   ########.fr       */
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
	
	i = 0;
/*	box = malloc(sizeof(int *)*n);
	while (i < n)
	{
		box[i] = malloc(sizeof(int)*n);
		i++;

	}*/

	box = createbox(box, n);

	return (box);	
}




