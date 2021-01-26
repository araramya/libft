/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:22:06 by araramya          #+#    #+#             */
/*   Updated: 2021/01/26 16:49:46 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*dst_cpy;
	char			*src_cpy;
	unsigned char	c_cpy;
	size_t			i;

	dst_cpy = dst;
	src_cpy = (char*)src;
	c_cpy = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*(dst_cpy + i) = *(src_cpy + i);
		if (*(src_cpy + i) == c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
