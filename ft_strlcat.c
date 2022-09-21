/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:57:00 by vasargsy          #+#    #+#             */
/*   Updated: 2022/03/29 14:47:12 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	index;

	i = 0;
	src_len = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[src_len])
		src_len++;
	src_len += i;
	index = i;
	while (src[i - index] && i + 1 < dstsize)
	{
		dst[i] = src[i - index];
		i++;
	}
	if (i < dstsize)
		dst[i] = 0;
	return (src_len);
}
