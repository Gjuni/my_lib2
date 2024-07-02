// newline으로 반환 '\n'

#include "libft2.h"

void ft_putendl_fd(char *s, int fd) {
    size_t len;
    size_t i;
    len = 0;
    i = 0;

    if(!s)
        return;
    while(s[len] != '\0')
        len++;
    while(i <= len) {
        if(i == len)
            s[i] = '\n';
        write(fd, &s[i], 1);   
        i++;
    }
}