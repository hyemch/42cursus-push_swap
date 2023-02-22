/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:30:29 by hyecheon          #+#    #+#             */
/*   Updated: 2022/11/18 16:14:53 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	gnl_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

void	*gnl_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)b;
	value = (unsigned char)c;
	while (len)
	{
		*ptr++ = value;
		len--;
	}
	return (b);
}

char	*gnl_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0')
	{
		if ((char)c == '\0')
			return ((char *)s);
		else
			return (0);
	}
	return (0);
}

char	*gnl_strdup(char *s1)
{
	size_t	i;
	char	*dst;

	i = 0;
	dst = (char *)malloc(sizeof(char) * (gnl_strlen(s1) + 1));
	if (dst == 0)
		return (0);
	gnl_memset(dst, 0, gnl_strlen(s1) + 1);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (0);
	else if (!s1)
		return (gnl_strdup(s2));
	else if (!s2)
		return (gnl_strdup(s1));
	str = (char *)malloc(sizeof(char) * (gnl_strlen(s1) + gnl_strlen(s2) + 1));
	if (!str)
		return (0);
	gnl_memset(str, 0, gnl_strlen(s1) + gnl_strlen(s2) + 1);
	i = -1;
	j = 0;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	free (s1);
	s1 = NULL;
	return (str);
}
