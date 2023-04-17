/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:12:11 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/17 14:14:30 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup (const char *s);
{
	void	str;

	if (nelem == 0 || elsize == 0)
		nelem = elsize = 1;
	str = malloc (nelem * elsize);
	if (str)
		bzero (str, nelem * elsize);
	return str;
}
