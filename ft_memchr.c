/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:55:51 by araramya          #+#    #+#             */
/*   Updated: 2021/01/26 17:27:52 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cpy;
	unsigned char	c_cpy;
	size_t			i;

	s_cpy = (unsigned char*)s;
	c_cpy = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*s_cpy == c)
			return (s_cpy);
		s_cpy++;
		i++;
	}
	return (NULL);
}
