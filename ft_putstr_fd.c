/** s : string to output
 *  fd file descriptor write == 1
 */

#include "libft2.h"

void ft_putstr_fd (char *s, int fd) {
    size_t len;
    size_t i;
    len = 0;
    i=0;

    if(!s)
        return;
    while(s[len] != '\0') 
        len++;

    while(i < len) {
        write(fd, &s[i], 1);
        i++;
    }
}

/** 예외처리 시 습관적으로 return NULL을 사용했다.
 *  그랬더니 Warning 문구가 나옴. 하지만 함수가 void임
 *  즉 반환하는 값이 없다는 뜻 그래서 NULL을 구지 안사용해도 된다는 뜻
 */