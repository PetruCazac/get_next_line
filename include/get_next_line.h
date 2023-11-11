/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:48:07 by pcazac            #+#    #+#             */
/*   Updated: 2023/11/11 02:20:59 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

char	*get_next_line(int fd);
int		line_end(char *buff);
char	*ft_calloc(char **return_line, int *count, char *static_buffer);
void	clean_the_buff(char *buff);
char	*ft_bzero(char *str, int size);
void	copy_buff(char *static_buffer, char *temp_buffer);
char	*ft_treat(char *return_line);

#endif
