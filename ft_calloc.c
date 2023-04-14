/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:45:28 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/14 15:28:26 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	ptr;

	if (nelem == 0 || elsize == 0)
		nelem = elsize = 1;
	ptr = malloc (nelem * elsize);
	if (ptr)
		ft_bzero(ptr, nelem * elsize);
	return ptr;
}
