/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:58:01 by mamottet          #+#    #+#             */
/*   Updated: 2023/04/17 21:15:20 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	count_s1;
	size_t	count_set;
	size_t	count_tmp_s1;
	size_t	count_tmp_set;
	size_t	count_strtrim;
	char	*strtrim;

	count_s1 = 0;
	count_set = 0;
	count_tmp = 0;
	while(s1[count_s1] != '\0')
	{
		if (s1[count_s1] == set[count_set])
		{
			count_tmp_s1 = count_s1
			count_tmp_set = count_set;
			while (s1[count_tmp_s1] != '\0')
			{
				if(set[count_tmp_set] != '\0')
					count_s1 = count_tmp_s1;
				if(s1[count_tmp_s1] == set[count_tmp_set])
				{
					count_tmp_s1 ++;
					count_tmp_set ++;
				}
				else
					break;
			}
		}
		strtrim[count_strtrim] = s1[count_s1];
		count_s1 ++;
		count_strtrim ++;
	}
	strtrim = (char) malloc(ft_strlen(strtrim) * sizeof(char));
	return(strtrim);
	
}
