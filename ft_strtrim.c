/** char *strtrim (char const *s1, char const *s2)
 *  s1에서 찾은 s2에 포함된 문자들을 양 끝에서 제거한 후 결과 문자열
 * 
 *  앞이랑 뒤를 검사를 따로 따로 진행 만약 s2에 없는 문자가 존재한다면 끝
 *  앞의 인덱스와 뒤의 인덱스를 알아서 그걸로 이어붙히면? whsskdjfuqsp
 */

//  https://sueshin.tistory.com/25

#include "libft2.h"

char *ft_strtrim(char const *s1, char const *s2) {
    size_t s1_len;
    size_t s2_len;

    while(s1[s1_len] != '\0')
        s1_len++;
    while(s2[s2_len] != '\0')
        s2_len++;

    char *new_str;
    new_str = (char *)malloc(sizeof(char)*(s1_len+1));

    size_t start;
    size_t end;
    start = 0;
    end =s1_len -1;
    // confuse lol
    size_t idx;
    size_t com_idx;
    idx =0;     // new_str 인덱스
    com_idx =0; // s2의 인덱스를 비교

    size_t sign; // s1에 s1의 요소가 있는지 검사하는 요소
    sign = 0;

    while(start < s1_len) {
        com_idx =0;
        sign =0;

        while(com_idx < s2_len) {
            if(s1[start] == s2[com_idx]) {
                sign =1;
                break;
            }
            com_idx++;
        }

        if(!sign) {
            break;
        }
        start++;
    }

    while(end > start) {
        com_idx= 0;
        sign =0;
        
        while(com_idx < s2_len) {
            if(s1[end] == s2[com_idx]) {
                sign = 1;
                break;
            }
            com_idx ++;
        }

        if(!sign) {
            break;
        }
        end--;
    }

    while(start <= end){
        new_str[idx] = s1[start];
        idx++;
        start++;
    }

    new_str[idx] = '\0';

    return new_str;
}