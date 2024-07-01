#include <stdio.h>
#include "libft2.h"

int main(void) {
    int num = -99123;
    char *new_num;

    new_num = ft_itoa(num);

    printf("%s", new_num);

    printf("\n");
    return 0;
}