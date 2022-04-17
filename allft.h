/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 10:59:39 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 11:39:20 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLFT_H
# define ALLFT_H

int		ft_boxsize(char *input);
int		**ft_inputArray(int **i_array, char *input, int n);
int		**ft_inputArraySize(int **i_array, int n);
int		**ft_mallocBox(int **box, int n);
void	ft_printbox(int **b, int n);
int		**ft_rush(char *input, int **box, int **i_array, int n);

#endif