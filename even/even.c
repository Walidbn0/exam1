/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   even.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbenhamm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:51:44 by wbenhamm          #+#    #+#             */
/*   Updated: 2023/10/04 14:59:56 by wbenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
//	int j;

	i = 0;
//	j = 1
	if (argc != 1)
	{
		while (argv[1][i] != '\0')
		{
			if (i % 2 == 0)
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	return (0);
}
