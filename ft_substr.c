/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:00:54 by araramya          #+#    #+#             */
/*   Updated: 2021/02/02 14:07:06 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	if (!(sub_str = malloc(sizeof(*s) * len + 1)))
		return (NULL);
	i = 0;
	while (*s && i < len)
	{
		sub_str[i] = s[start];
		start++;
		i++;
	}
	sub_str[i] = 0;
	return (sub_str);
}
