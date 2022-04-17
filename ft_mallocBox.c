/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mallocBox.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:11:40 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 08:09:44 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	**ft_mallocBox(int **box, int n)
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
