/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:15:50 by mportaka          #+#    #+#             */
/*   Updated: 2023/10/30 15:51:15 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lenght;
	char	*a;

	lenght = ft_strlen(s1) + ft_strlen(s2) + 1;
	a = (char *)malloc(sizeof(char) * (lenght));
	if (!a)
		return (0);
	ft_strlcpy(a, s1, lenght);
	ft_strlcat(a, s2, lenght);
	return (a);
}
