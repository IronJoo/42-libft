/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferro <jferro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:59:13 by jferro            #+#    #+#             */
/*   Updated: 2021/11/22 18:31:08 by jferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*p;

	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (s_len < start)
	{
		p = (char *)malloc(sizeof(char));
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = -1;
	while (s[start + ++i] != '\0' && i < len)
		p[i] = s[start + i];
	p[i] = '\0';
	return (p);
}
