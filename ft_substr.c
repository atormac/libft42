/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorma <atorma@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:36:08 by atorma            #+#    #+#             */
/*   Updated: 2024/04/17 19:08:06 by atorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	sub_len;

	if (!s || !len)
		return (NULL);
	if (ft_strlen(s) < start)
		return (NULL);
	sub_len = ft_strlen(s + start);
	if (sub_len > len)
		sub_len = len;
	if (sub_len == 0)
		return (NULL);
	str = malloc(sub_len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, sub_len + 1);
	return (str);
}
