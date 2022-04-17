/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 10:59:39 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 14:48:29 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLFT_H
# define ALLFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_boxsize(char *input);
int		**ft_inputarray(char *input);
int		**ft_inputarraysize();
int		**ft_mallocbox();
void	ft_printbox(int **b);
int		**ft_rush(char *input);
int		**ft_putnumber();
int		g_n;
int 	**box;
int		**i_array;

#endif