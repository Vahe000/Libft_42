/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:34:49 by vasargsy          #+#    #+#             */
/*   Updated: 2022/04/01 17:16:06 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		dest = malloc(0);
	else if (ft_strlen(s) - start > len)
		dest = malloc(len + 1);
	else
		dest = malloc(ft_strlen(s) - start);
	if (dest == NULL || s == NULL)
		return (0);
	while (start < ft_strlen(s) && i < len)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
