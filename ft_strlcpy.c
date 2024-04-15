#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	n;
	int	src_len;

	n = dstsize;
	src_len = ft_strlen(src);
	while (n-- > 1 && *src)
		*dst++ = *src++;
	if (dstsize != 0)
		*dst = 0;
	return (src_len);
}
