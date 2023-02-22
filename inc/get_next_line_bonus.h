/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:41:05 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/22 16:41:09 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

#define BUFFER_SIZE 42

size_t	gnl_strlen(const char *s);
void	*gnl_memset(void *b, int c, size_t len);
char	*gnl_strchr(const char *s, int c);
char	*gnl_strdup(char *s1);
char	*gnl_strjoin(char*s1, char *s2);
char	*get_next_line(int fd);

#endif
