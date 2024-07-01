/** char *ft_itoa(int n)
 * 정수를 문자열로 표기
 */

// 10으로 나눠서 길이를 판별
// 음수 영역은? n이 0보다 작다면 sign을 곱해줌

#include "libft2.h"

int num_len(int n) {
    int len;
    len = 0;
    if(n <= 0) {
        len++;
    }
    while(n != 0) {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n) {
    size_t len;
    char *str;
    int sign;

    sign = 1;
    len = num_len(n);
    if(n < 0) {
        sign = -1;
        n *= sign;
    }
    str = (char *)malloc(sizeof(char) * (len +1));

    str[len] = '\0';

    while(n != 0) {
        len--;
        str[len] = '0' + n%10;
        n /= 10;
    }
    if(sign == -1) {
        str[0] = '-';
    }
    return str;  
}