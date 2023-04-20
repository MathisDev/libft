/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:10:14 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/20 05:17:09 by Onizukkka        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)dst;
	i = 0;
	while (i < n)
	{
		*(char *)str = *(char *)src;
		str++;
		src++;
		i++;
	}
	return (dst);
}
