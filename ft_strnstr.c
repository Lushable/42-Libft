/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flus <flus@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:53:54 by flus              #+#    #+#             */
/*   Updated: 2023/10/13 20:44:01 by flus             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *search, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (search[j] == '\0')
		return ((char *)string);
	while (string[i] != '\0')
	{
		while (string[i + j] == search[j] && string[i + j] != '\0' && \
		(i + j) < len)
			j++;
		if (search[j] == '\0')
			return ((char *)string + i);
		i++;
		j = 0;
	}
	return (0);
}

// int main()
// {
// 	char *str = "lorem dolor";
// 	char *str2 = "dolor";
// 	printf("%s\n", ft_strnstr(str,str2, 11));
// 	printf("%s", strnstr(str,str2,11));
// }
