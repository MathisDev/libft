/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:06:28 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/20 02:15:15 by Onizukkka        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (s == 0)
		return ;
	i = 0;
	while (i != n)
	{
		*(char*)(s + i) = 0;
		i++;
	}
}

