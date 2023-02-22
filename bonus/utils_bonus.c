/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:57:42 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/22 21:57:45 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	print_error(void)
{
	write(2, "KO\n", 3);
	exit(255);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t				i;
	unsigned char		*sptr1;
	unsigned char		*sptr2;

	sptr1 = (unsigned char *)s1;
	sptr2 = (unsigned char *)s2;
	i = 0;
	while (sptr1[i] != '\0' || sptr2[i] != '\0')
	{
		if (sptr1[i] != sptr2[i])
			return (sptr1[i] - sptr2[i]);
		i++;
	}
	return (0);
}
