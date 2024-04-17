/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorma <atorma@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:50:29 by atorma            #+#    #+#             */
/*   Updated: 2024/04/17 18:34:06 by atorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s + 1);
	while (size >= 0 && s[size] != c)
		size--;
	if (s[size] == c)
		return ((char *)(s + size));
	return (NULL);
}
