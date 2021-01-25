/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:35:06 by araramya          #+#    #+#             */
/*   Updated: 2021/01/25 17:53:48 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	c_cpy;
	char			*b_cpy;
	size_t			i;

	c_cpy = (unsigned char)c;
	b_cpy = b;
	i = 0;
	while (i < len)
	{
		b_cpy[i] = c_cpy;
		i++;
	}
	return (b_cpy);
}
