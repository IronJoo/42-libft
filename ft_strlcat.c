/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferro <jferro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:46:23 by jferro            #+#    #+#             */
/*   Updated: 2021/11/22 18:49:36 by jferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (destsize < i)
	{
		while (src[j])
			j++;
		return (destsize + j);
	}
	while (destsize > 0 && i < destsize - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}
