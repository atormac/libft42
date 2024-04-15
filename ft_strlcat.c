/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorma <atorma@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:14:24 by atorma            #+#    #+#             */
/*   Updated: 2024/04/15 17:23:38 by atorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst += dst_len;
	if (dstsize > 0)
	{
		while (*src && i < dstsize - dst_len - 1)
		{
			*dst++ = *src++;
			i++;
		}
		if (dst_len <= dstsize)
			*dst = 0;
	}
	return (dst_len + src_len);
}
