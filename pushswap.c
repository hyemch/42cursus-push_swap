/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:30:24 by hyecheon          #+#    #+#             */
/*   Updated: 2023/01/29 17:30:35 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int 	j;

	i = 1;
	j = 0;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		if (argv[i] != NULL)
		{
			while (argv[i][j] != '\0')
			{
				if (argv[i][j])
				{
				}
				j++;
			}
		}
		i++;
	}
}
