/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferro <jferro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:04:13 by jferro            #+#    #+#             */
/*   Updated: 2021/11/22 18:59:36 by jferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			if (i == 0 || s[i - 1] == c)
				count++;
		}
		i++;
	}
	return (count);
}

void	alloc_words(char const *s, char c, char **p, int word_count)
{
	int	i;
	int	j;
	int	start;
	int	word_len;

	i = 0;
	j = 0;
	start = 0;
	word_len = 0;
	while (j < word_count)
	{
		while (s[i] == c || s[i] == '\0')
		{
			start++;
			i++;
		}
		while (s[i] != c && s[i] != '\0')
		{
			word_len++;
			i++;
		}
		p[j++] = ft_substr(s, start, word_len);
		word_len = 0;
		start = ++i;
	}
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**p;

	if (!s)
		return (NULL);
	word_count = get_word_count(s, c);
	p = (char **)malloc((sizeof(char *)) * (word_count + 1));
	if (!p)
		return (NULL);
	p[word_count] = NULL;
	alloc_words(s, c, p, word_count);
	return (p);
}
