/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:24:25 by araramya          #+#    #+#             */
/*   Updated: 2021/01/28 11:23:00 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(int num)
{
	int len;

	len = 0;
	if (num < 0)
	{
		len++;
		num *= -1;
	}
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int		length;
	char	*str;
	int		i;

	if (n == -2147483648)
		return ("-2147483648");
	length = ft_len(n);
	if (!(str = (char*)malloc(sizeof(char) * length + 1)))
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		n *= -1;
	}
	i = length - 1;
	while (n != 0)
	{
		str[i] = n % 10 + 48;
		i--;
		n /= 10;
	}
	str[length] = '\0';
	return (str);
}
