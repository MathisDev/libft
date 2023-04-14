/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:11:39 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/13 18:32:57 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		count;

	count = 0;
	if (s2 == NULL || ft_strlen(s2) == 0)
		return ((char *)s1);
	if (ft_strlen(s2) > n)
		return (NULL);
	while (count < n)
	{
		if (ft_strncmp((char *)&s1[count], s2, ft_strlen(s2)) == 0)
		{
			if (count + ft_strlen(s2) > n)
				return (NULL);
			return ((char *)&s1[count]);
		}
		count++;
	}
	return (NULL);
}

