/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 11:42:27 by araramya          #+#    #+#             */
/*   Updated: 2021/01/31 14:30:19 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_char_in_str(char c, const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int 	len;
	int		start;
	int		end;
	int		i;
	char	*str_cpy;

	start = 0;
	end = -1;
	i = 0;
	while (s1[i++])
		end++;
	while (s1[start] && ft_is_char_in_str(s1[start], set))
		start++;
	while (s1[end] && ft_is_char_in_str(s1[end], set))
		end--;
	len = start - end + 1;
	if (len < 0)
	{
		if(!(str_cpy = (char*)malloc(1)))
			return (NULL);
	}
	else
	{
		if (!(str_cpy = (char*)malloc(sizeof(char) * (len) + 1)))
			return (NULL);
	}
		i = 0;
		while (start <= end)
	{
		str_cpy[i] = s1[start];
		i++;
		start++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}
