/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:24:25 by araramya          #+#    #+#             */
/*   Updated: 2021/01/27 19:22:13 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		n_cpy;
	char	*str;
	int		i;

	if (n == -2147483648)
		return ("-2147483648");
	n_cpy = n;
	len = 0;
	while (n_cpy)
	{
		len++;
		n_cpy /= 10;
	}
	n_cpy = n;
	if (n_cpy < 0)
	{
		len++;
		n_cpy *= -1;
	}
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	if (n < 0)
		str[i] = '-';
	i = len - 1;
	while (n_cpy != 0)
	{
		str[i] = n_cpy % 10 + 48;
		i--;
		n_cpy /= 10;
	}
	str[len] = '\0';
	return (str);
}
