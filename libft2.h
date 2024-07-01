#ifndef LIBFT2_H
#define LIBFT2_H

#include <stddef.h> // size_t
#include <stdlib.h> // malloc

char *ft_substr(const char *str, unsigned int s, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *s2);


char *ft_itoa(int n);
#endif