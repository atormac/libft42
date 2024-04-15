#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_strlen(const char *str);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
void	*ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
#endif

