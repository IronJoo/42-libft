/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferro <jferro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:08:15 by jferro            #+#    #+#             */
/*   Updated: 2021/11/19 16:20:37 by jferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	if (s[i] == (char)c)
		ptr = (char *) &s[i];
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == (char)c)
			ptr = (char *) &s[i];
	}
	return (ptr);
}
