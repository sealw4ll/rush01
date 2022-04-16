/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:06:51 by lchew             #+#    #+#             */
/*   Updated: 2022/04/16 22:14:54 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_boxsize(char *input);
int **rush(char *input, int **ptr);
void	ft_printbox(int **b, int n);

int main()
{
	int 	**box;
	int		**i_array;
	char	*input = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	int 	n;

	box = NULL;
	i_array = NULL;
/*	if (argc != 2)
	{
		write(1, "Error: no input.\n", 16); 	
		return 0;
	}*/
//	printf("%d\n", argc);
//	printf("%s\n", input);
//	printf("%d\n", ft_boxsize(input));
	n = ft_boxsize(input);
	box = rush(input, box);
	ft_printbox(box, n);

	return 0;
}
