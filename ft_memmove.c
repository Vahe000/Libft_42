/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:59:28 by vasargsy          #+#    #+#             */
/*   Updated: 2022/03/29 14:34:40 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*arr1;
	unsigned char	*arr2;

	arr1 = (unsigned char *)dst;
	arr2 = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len--)
			*(arr1 + len) = *(arr2 + len);
	}
	else if (dst < src)
	{
		while (len--)
			*(arr1++) = *(arr2++);
	}
	return (dst);
}
