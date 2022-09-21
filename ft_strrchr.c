/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:32:37 by vasargsy          #+#    #+#             */
/*   Updated: 2022/03/23 13:09:59 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c < 0 || c > 127)
		return ((char *)s);
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*int main()
{
   const  char arr[] = "karlenncvfglfvbgf";

	 printf("%s\n", ft_strrchr(arr, 0));
    printf("%s", strrchr(arr, 0));
}*/
