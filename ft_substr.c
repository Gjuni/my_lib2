/** char *substr(char const *s, unsinged int s, size_t len)
 *  s : 문자열
 *  s : 시작 문자열
 *  len : 문자열의 길이
 * 
 *  문자열에서 특정 범위를 입력하는 해당 문구를 리턴하는 매소드
 *  substr(str, 3, 5); 라면 3번째 인덱스부터 5개를 리턴
 */

#include "libft2.h"

char *ft_substr(const char *str, unsigned int s, size_t len) {
    char *new_str;
    new_str = (char *)malloc(sizeof(char)* len);

    size_t idx; 
    size_t i;
    i =0;
    idx = 0;

    while(str[i] != '\0')
        i++;

    if(!new_str)
        return NULL;

    while(idx < len && idx+s < i) { // 만약 인덱스 + i가 str의 길이보다 초과된다면..?
        new_str[idx] = str[s-1+idx];
        idx++;
    }
    new_str[idx] = '\0';
    return new_str;
}


