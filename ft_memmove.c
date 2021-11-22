/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferro <jferro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:46:18 by jferro            #+#    #+#             */
/*   Updated: 2021/11/22 18:42:16 by jferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		i = 0;
		while (i < (int)len)
		{
			((char *) dst)[i] = ((char *) src)[i];
			i++;
		}
	}
	else
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			((char *) dst)[i] = ((char *) src)[i];
			i--;
		}
	}
	return (dst);
}
