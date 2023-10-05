/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alph2a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbenhamm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:21:07 by wbenhamm          #+#    #+#             */
/*   Updated: 2023/10/05 14:03:12 by wbenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv){
	int i = 0;
	int r;

	if (argc >= 2)
	{
		while (argv[1][i] != '\0')
		{ 
			r=1;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				r += argv[1][i] - 'A';
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				r += argv[1][i] - 'a';
			while (r)
			{
				write (1, &argv[1][i], 1);
				r--;
			}
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
