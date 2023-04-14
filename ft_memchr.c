/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:09:22 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/13 18:21:05 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memchr(const void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    while( i != n)
    {
        if (*(unsigned char*)(s + i) != (unsigned char)c)
            i ++;
        else
            return ((void*)(s + i));
    }
    return (NULL);
}
