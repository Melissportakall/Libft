/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:54:26 by mportaka          #+#    #+#             */
/*   Updated: 2023/10/30 15:50:42 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	j;
	size_t	temp;

	if (needle[0] == '\0')
		return ((char *)haystack);
	a = 0;
	while (haystack[a] && a < len)
	{
		j = 0;
		temp = a;
		while (haystack[j + a] == needle[j] && haystack[j + a] && temp < len)
		{
			temp++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[a]);
		a++;
	}
	return (0);
}
