/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:11:29 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/17 14:16:41 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while(((s1[count] != '\0') && (s2[count] != '\0'))|| (count >= n))
	{
		if (s1[count] == s2[count])
			count ++;
		else
			return(0);
	}
	return(1);
}
