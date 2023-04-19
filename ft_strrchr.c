/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:11:48 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/18 17:36:27 by Onizukkka        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int s_count;

    s_count = 0;
    while(s[s_count] != '\0')
    {
        if (s[s_count] != (char)c)
            s_count ++;
        else
            return ((char *)&s[s_count]);
    }
    return(NULL);
}
