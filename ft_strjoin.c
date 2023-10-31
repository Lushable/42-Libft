/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flus <flus@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:49:28 by flus              #+#    #+#             */
/*   Updated: 2023/10/20 17:30:29 by flus             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	n;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	n = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = (char *)malloc(n);
	if (s3 == 0)
		return (0);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
}
// int main()
// {
//     char *str1 = "fatih";
//     char *str2 = "furkan";

//     printf("%s",ft_strjoin(str1,str2));
// }