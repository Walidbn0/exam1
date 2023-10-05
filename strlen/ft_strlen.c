/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbenhamm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:02:26 by wbenhamm          #+#    #+#             */
/*   Updated: 2023/10/04 17:07:41 by wbenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_strlen(char *str)
{
	int len;
	len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	return (len);
}