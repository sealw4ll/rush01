/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 10:59:39 by lchew             #+#    #+#             */
/*   Updated: 2022/04/17 20:50:31 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLFT_H
# define ALLFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_boxsize(char *input);
int		**ft_inputarray(char *input);
int		**ft_inputarraysize(void);
int		**ft_mallocbox(void);
void	ft_printbox(int **b);
int		**ft_rush(char *input);
int		**ft_putnumber(void);
int		ft_solver(int row, int col);
int		ft_checkall(int row, int col, int x);
int		ft_directions(int row, int col, int x);
int		ft_checkleft(int row);
int		ft_checkright(int row);
int		ft_checktop(int col);
int		ft_checkbottom(int col);
int		g_n;
int		**g_box;
int		**g_i_array;

#endif