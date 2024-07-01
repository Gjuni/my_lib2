/** char *strjoin(char const *s1, char const *s2)
 *  접두사 문자열, 접미사 문자열
 * 
 * 이어 붙인 새 문자열, 실패시 NULL 반환
 */

#include "libft2.h"

char *ft_strjoin(char const *s1, char const *s2) {
    size_t idx_s1;
    size_t idx_s2;
    size_t new_idx;
    idx_s1 = 0;
    idx_s2 = 0;

    while(s1[idx_s1] != '\0')
        idx_s1++;
    while(s2[idx_s2] != '\0')
        idx_s2++;

    char *new_str;
    new_str = (char *)malloc(sizeof(char)+idx_s1+idx_s2);

    if(!s1 || !s2 || !new_str)
        return NULL;

    while(new_idx < idx_s1) {
        new_str[new_idx] = s1[new_idx];
        new_idx++;
    }
    new_idx = 0;
    while(new_idx < idx_s2) {
        new_str[idx_s1+new_idx] = s2[new_idx];
        new_idx++;
    }
    new_str[idx_s1+idx_s2] = '\0';
    return new_str;
}