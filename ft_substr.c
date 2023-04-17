/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:44:14 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/17 13:45:28 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count_s;
	size_t	count_str;
	char	*str;

	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[count_s])
	{
		if (count_s >= start && count_str < len)
		{
			str[count_str] = s[count_s];
			j++;
		}
		i++;
	}
	str[count_str] = 0;
	return (str);
}