/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:25:16 by araramya          #+#    #+#             */
/*   Updated: 2021/01/23 20:00:08 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *string_cpy;
	int i;

	i = 0;
	string_cpy = (char*)s;
	while(string_cpy != '\0')
	{
		string_cpy++;
		i++;
	}
	while(i != 0)
	{
		if (*string_cpy == c)
			return (string_cpy);
		i--;
		string_cpy--;
	}
	return (NULL);
}
