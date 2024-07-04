// str에서 int로 변환

#include "libft2.h"

void ft_putchar(char c, int fd){
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd) {
    int reverse_num;

    if(n < 0) {
        n *= -1;
        ft_putchar('-', fd);
    }
    while(n != 0) {
        reverse_num = (reverse_num*10) + (n%10);
        n /= 10;
    }
    while(reverse_num != 0) {
        ft_putchar(reverse_num%10+'0', fd);
        reverse_num /= 10;
    }
}