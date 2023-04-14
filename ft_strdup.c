/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:12:11 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/14 18:00:50 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup (const char *s);
{
	void	ptr;

	if (nelem == 0 || elsize == 0)
		nelem = elsize = 1;
	ptr = malloc (nelem * elsize);
	if (ptr)
		bzero (ptr, nelem * elsize);
	return ptr;
}
