/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferro <jferro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:31:32 by jferro            #+#    #+#             */
/*   Updated: 2021/11/22 20:13:44 by jferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_len(long int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	n_cpy;

	len = check_len(n);
	str = (char *)malloc((sizeof(char)) * (len + 1));
	n_cpy = (long int) n;
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n_cpy = n_cpy * -1;
	}
	str[len--] = '\0';
	while (len >= 0)
	{
		if (n == 0)
			str[0] = '0';
		if (len == 0 && n_cpy <= 0)
			break ;
		str[len--] = (n_cpy % 10) + 48;
		n_cpy = n_cpy / 10;
	}
	return (str);
}
