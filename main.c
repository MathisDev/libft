/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:56:32 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/19 15:28:59 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <stdio.h>
# include <string.h>

int	verif_char(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] == s2[count])
			count ++;
		else
			return (count);
	}
	return (0);
}


int	main(void)
{
	char *off_char;
	char *perso_char;
	int	result;

	off_char = ft_strrchr("je ne suis paes",'\0');
	perso_char = strrchr("je ne suis paes",'\0');
	result = verif_char(off_char,perso_char);
	if (result == 0)
		printf("OK");
	else
	{
		printf("KO");
		printf("Officiel function = %s \nPersonal function = %s",off_char,perso_char);
	}	
	return (0);
}
