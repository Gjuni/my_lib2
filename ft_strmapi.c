/** s : 함수를 적용시키고 싶은 문자열
 *  f : 문자열을 바꿔줄 함수 포인터 (함수를 포인터 처럼 사용하면서 매개변수, 하나의 변수처럼 사용)
 *      unsigned int : s의 현재 인덱스
 *      char 값을 적용시킬 s의 요소
 */

//      https://velog.io/@meong9090/42seoul-ftstrmapi%EB%8A%94-%EC%96%B4%EB%96%A4-%ED%95%A8%EC%88%98%EC%9D%BC%EA%B9%8C

#include "libft2.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    size_t i;
    size_t idx;
    char *new_str;
    i =0;
    idx =0;

    while(s[i] != '\0')
        i++;
    
    new_str = (char *)malloc(sizeof(char) * (i+1));

    if(!new_str)
        return NULL;

    while(idx < i) {
        new_str[idx] = f(idx, s[idx]);
        idx++;
    }

    return new_str;
}