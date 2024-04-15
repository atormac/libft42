/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorma <atorma@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:09:14 by atorma            #+#    #+#             */
/*   Updated: 2024/04/15 17:13:24 by atorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	register unsigned char *p1;
	register unsigned char *p2;

	p1 = (unsigned char *)dst;
	p2 = (unsigned char*)src;
	while (n--)
	{
		*p1++ = *p2++;
	}
	return (dst);
}
