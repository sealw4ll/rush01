/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createbox.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@42kl.edu.my>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:11:40 by lchew             #+#    #+#             */
/*   Updated: 2022/04/16 18:30:27 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	**createbox(int **box, int n)
{
	int i;
	
	i = 0;
	box = malloc(sizeof(int *)*n);
	while (i < n)
	{
		box[i] = malloc(sizeof(int)*n);
		i++;
	}
	return (box);
}
