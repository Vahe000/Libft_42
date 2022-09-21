/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:43:18 by vasargsy          #+#    #+#             */
/*   Updated: 2022/04/01 17:02:15 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;
	size_t			i;

	arr1 = (unsigned char *)dst;
	arr2 = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (n)
	{
		arr1[i] = arr2[i];
		i++;
		n--;
	}
	return (arr1);
}
