/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:58:08 by mportaka          #+#    #+#             */
/*   Updated: 2023/10/30 15:50:02 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	lenght;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	lenght = 0;
	while (lenght < len && *(s + start + lenght))
		lenght++;
	a = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!a)
		return (0);
	ft_strlcpy(a, s + start, lenght + 1);
	return (a);
}
