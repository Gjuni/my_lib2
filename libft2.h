#ifndef LIBFT2_H
#define LIBFT2_H

#include <stddef.h> // size_t
#include <stdlib.h> // malloc
#include <unistd.h> // write

char *ft_substr(const char *str, unsigned int s, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *s2);
char **ft_split(char const *s, char c);

char *ft_itoa(int n);

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char *));

void ft_putchar_fd(char c, int fd);
void ft_putstr_fd (char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
#endif