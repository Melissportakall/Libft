/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:57:35 by mportaka          #+#    #+#             */
/*   Updated: 2023/10/30 15:51:23 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	size_t	lenght;

	lenght = ft_strlen(s1);
	a = (char *)malloc(lenght + 1);
	if (!a)
		return (0);
	ft_strlcpy(a, s1, lenght + 1);
	return (a);
}
