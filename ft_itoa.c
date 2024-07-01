/** char *ft_itoa(int n)
 * 정수를 문자열로 표기
 */

// 10으로 나눠서 길이를 판별
// 음수 영역은? n이 0보다 작다면 sign을 곱해줌

#include "libft2.h"

char *ft_itoa(int n) {
    size_t len;
    char *str;
    int sign;
    int new_num;

    new_num = n;
    sign = 1;
    if(n < 0) {
        sign = -1;
    }

    while(new_num < 1) {
        new_num = new_num/10;
        len++;
    }
    str = (char *)malloc(sizeof(char) *len);

    return new_str;
}