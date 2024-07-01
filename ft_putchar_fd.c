/** void ft_putchar_fd (char c, int fd)
 *  c : output
 *  fd : 파일 디스크립터
 * 문자를 출력해주는 함수
 * 
 * 0 : 표준 입력
 * 1 : 표준 출력
 * 2 : 표준 오류
 * 
 *  write (int fd, void *buf, size_t size);
 *  fd는 open 함수로 받아온 파일 디스크립터
 *  size 크기 만큼 buf에 저장된 데이터를 출력
 */

#include "libft2.h"

void ft_putchar_fd(char c, int fd) {
    write(fd, &c, 1);       // 쓰기로 fd는 표준 출력으로 (putchar가 표준 출력이니)
                            // c는 주소값을 반환, putchar는 1개의 값을 읽으니 1로 고정
}