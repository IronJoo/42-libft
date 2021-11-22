/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferro <jferro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:36:29 by jferro            #+#    #+#             */
/*   Updated: 2021/11/22 18:58:44 by jferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*p;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	j = 0;
	p = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!p)
		return (NULL);
	while (i < s1_len)
		p[i++] = s1[j++];
	j = 0;
	while (j < s2_len)
		p[i++] = s2[j++];
	p[i] = '\0';
	return (p);
}
