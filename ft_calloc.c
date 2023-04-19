/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:45:28 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/19 16:57:36 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmb, size_t size)
{
	void	*ptr;

	if (nmb == 0 || size == 0)
		nmb = size = 1;
	ptr = malloc (nmb * size);
	if (ptr == NULL)
		return(ptr);
	ft_bzero(ptr, nmb * size);
	return (ptr);
}
