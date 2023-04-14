/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:03:11 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/13 09:15:11 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"


int	main(void)
{
	printf(" -- isalpha -- \n");
	printf("%d\n",ft_isalpha('j'));
	printf("%d\n",isalpha('j'));
	printf(" -- isdigit --\n");
	printf("%d\n",ft_isdigit('1'));
	printf("%d\n",isdigit('1'));
	printf(" -- isalnum -- \n");
	printf("%d\n",ft_isalnum('1'));
	printf("%d\n",isalnum('1'));
	printf(" -- isascii --\n");
	printf("%d\n",ft_isascii('a'));
	printf("%d\n",isascii('a'));
	printf(" -- strlen --\n");
	printf("%ld\n",ft_strlen("je ne suids pas"));
	printf("%ld\n",strlen("je ne suids pas"));

	return (0);
}
