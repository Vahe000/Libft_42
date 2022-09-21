/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:51:37 by vasargsy          #+#    #+#             */
/*   Updated: 2022/03/25 19:07:24 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*arr;
	unsigned char	ch;

	ch = c;
	i = 0;
	arr = (unsigned char *)s;
	while (i < n)
	{
		if (arr[i] == ch)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
