/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbenhamm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:48:22 by wbenhamm          #+#    #+#             */
/*   Updated: 2023/10/04 16:56:18 by wbenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (src[i] !='\0')
	{
		*dest[i] = *src[i];
		i++
	}
	dest[i] != '\0';
	return (dest);
}