/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:42:54 by sbouabid          #+#    #+#             */
/*   Updated: 2024/05/19 10:56:58 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
#define CUB3D_H

#include "gnl/get_next_line.h"
#include "libft/libft.h"
#include <stdio.h>

typedef	struct s_temp
{
	int	NO;
	int	SO;
	int	WE;
	int	EA;
	int	F;
	int	C;
	int	i;
	int	j;
	int	N;
	int	S;
	int	E;
	int	W;
	int	find_map;
	int	find_new_line;
}	t_temp;

typedef	struct s_map
{
	char	*line;
	struct	s_map *next;
}	t_map;



typedef	struct s_cub3d
{
	char	**map;
	char	*NO;
	char	*SO;
	char	*WE;
	char	*EA;
	int		F;
	int		C;
}	t_cub3d;

void	free_arr(char **values);
int		size_arr(char **arr);
void	ft_puterror(char *msg);
void	check_map_name(char *name);
void	start_parsing(char *name_file, t_cub3d *cub3d);
int		parsing_map_values(char *line, t_temp *temp, t_cub3d *cub3d);
int		pars_color(char	*line, t_temp *temp);
void	draw_map(t_cub3d *cub, t_map *map);
void	full_map(char *line, t_map **map, t_temp *temp);
void	check_if_valid_map(t_cub3d *cub);

t_map	*list_create(char	*line);
void	list_add(t_map **head, t_map *node);
int		list_size(t_map *head);
void	list_clean(t_map **head);
#endif