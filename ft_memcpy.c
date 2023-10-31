/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flus <flus@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:21:28 by flus              #+#    #+#             */
/*   Updated: 2023/10/13 21:47:25 by flus             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	i = 0;
	if (dst2 == NULL && src2 == NULL)
		return (0);
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}

// int main()
// {
// char dest[9] = "123456789";
// char src[4] = "abcd";
// ft_memcpy(dest, src, 4);
// printf("%s",dest);
// }
