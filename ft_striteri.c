/** strmapi 와 비슷하지만
 *  함수가 포인터로 기존 string의 주소에 접근해 값을 바꾸게 된다.
 *  동적 할당을 사용할 필요없이 주어진 *s를 사용하여 코드를 구상하면 됨
 * 
 * 역시나 형 변환에서 한번 고생을 했다.
 */

//      https://sueshin.tistory.com/28  (물론 구현은 보지 않았습니다. 기능 읽고 바로 구현)

#include "libft2.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *)) {
    unsigned int i;
    i=0;

    while(s[i] != '\0') {
        f(i, &s[i]); // 참조값을 가르키게 해야함 (주소값이 아닌)
        i++;
    }
}


// 사용했던 예제 main 함수 

// void upper(unsigned int i, char *c) {
//     if(*c >= 'a' && *c <= 'z') {
//         *c = *c - ('a' - 'A');
//     }
// }

// int main(void) {
//     char str1[30] = "hello world";

//     ft_striteri(str1, upper);
//     printf("%s", str1);
//     printf("\n");
//     return 0;
// }

/** segmentation fault가 떠서 왜 인지 살펴보았더니
 * str1을 포인터 상수로 썻던 것 *str1 포인터 상수를 사용하게 되면
 * 문자열 전체를 가르키는 포인터가 되므로 그 안의 요소는 바꿀 수 없게 된다
 * 그렇기 때문에 문자열 상수로 수정하여 segmentaion fault를 해결
 */