/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:31:18 by araramya          #+#    #+#             */
/*   Updated: 2021/01/26 19:49:37 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dst, const void *src, size_t len)
{
	char			*dst_cpy;
	char			*src_cpy;
	size_t			i;

	dst_cpy = (char*)dst;
	src_cpy = (char*)src;
	i = 0;
	if (dst_cpy > src_cpy)
		while(len-- > 0)
			dst_cpy[len] = src_cpy[len];
	else
		while(i < len)
		{
			dst_cpy[i] = src_cpy[i];
			i++;
		}
	return (dst);
}
