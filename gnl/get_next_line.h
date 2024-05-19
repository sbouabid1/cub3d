/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:20:58 by sbouabid          #+#    #+#             */
/*   Updated: 2024/05/18 16:32:10 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*read_buffer(int fd, char *tmp);
char	*read_line(char *tmp);

char	*ft__strchr(char *str, int c);
char	*ft__strjoin(char *s1, char *s2);
char	*ft__substr(char *str, int len);
char	*ft__strdup(char *s1);
int		ft__strlen(char *str);
#endif
