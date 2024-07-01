/** char *strtrim (char const *s1, char const *s2)
 *  s1에서 찾은 s2에 포함된 문자들을 양 끝에서 제거한 후 결과 문자열
 */

#include "libft2.h"

char *ft_strtrim(char const *s1, char const *s2) {
    size_t i;
    size_t idx;
    size_t com_idx;
    char *new_str;
    i =0;
    idx = 0;
    com_idx =0;
    
    while(s2[i] != '\0')
        i++;

    new_str = (char *)malloc(sizeof(char) * i);
    
    while(s1[com_idx] != '\0') {
        idx = 0;
        while(idx <= i) {
            if(s1[com_idx+idx] == s2[idx]) {
                idx++;
            }
            else {
                new_str[com_idx] = s1[com_idx+idx];
                com_idx++;
                break;
            }
        }
    }
    return new_str;
}