/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:39:58 by vasargsy          #+#    #+#             */
/*   Updated: 2022/03/30 14:18:00 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*arr;
	size_t	size_len;

	size_len = count * size;
	arr = malloc(size_len);
	if (!arr)
		return (0);
	ft_bzero(arr, size_len);
	return ((char *)arr);
}
