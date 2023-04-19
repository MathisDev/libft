/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:06:25 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/18 19:01:56 by Onizukkka        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	count_str;

	if (!(str = ft_strdup(s)))
		return (NULL);
	count_str = 0;
	while (str[count_str])
	{
		str[count_str] = (*f)(count_str, str[count_str]);
		count_str++;
	}
	return (str);
}
