/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:48:07 by pcazac            #+#    #+#             */
/*   Updated: 2023/05/11 15:05:41 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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
