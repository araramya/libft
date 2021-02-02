/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 11:42:27 by araramya          #+#    #+#             */
/*   Updated: 2021/02/01 15:44:49 by araramya         ###   ########.fr       */
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

static int		just_for_norminette1(char const *s1)
{
	int end_f;
	int i;

	i = 0;
	end_f = -1;
	while (s1[i++])
		end_f++;
	return (end_f);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*str_cpy;

	start = 0;
	end = just_for_norminette1(s1);
	while (s1[start] && ft_is_char_in_str(s1[start], set))
		start++;
	while (s1[end] && ft_is_char_in_str(s1[end], set))
		end--;
	if ((start - end + 1) < 0)
	{
		if (!(str_cpy = (char*)malloc(1)))
			return (NULL);
	}
	else if (!(str_cpy = (char*)malloc(sizeof(char) * (start - end + 1) + 1)))
		return (NULL);
	i = 0;
	while (start <= end)
		str_cpy[i++] = s1[start++];
	str_cpy[i] = '\0';
	return (str_cpy);
}
