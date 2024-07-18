#include "libft2.h"

// 1. 구분 문자열을 제외한 문자 갯수 (행)
// 2. 시작 점 구분해서 문자를 카우늩 할 것 (열)

int word_count(char const *s, char c) {
    size_t count;
    count = 0;
    while (*s) {
        if(*s != c)
            count++;
        while (*s && *s != c)
            s++;
        while (*s && *s == c)
            s++;
    }
    return count;
}

char *ft_strncpy(const char *s, size_t start, size_t end) {
    char *new_arr;
    size_t len;
    new_arr = (char *)malloc(sizeof(char) * (end - start +1));
    len =0;


    while((start + len) < end) {
        new_arr[len] = s[start + len];
        len++;
    }
    new_arr[len] = '\0';
    return new_arr;
}

char **ft_split(char const *s, char c) {
   char **new_arr;
   size_t count;
   size_t len;
   size_t init;
   int start;
   count = word_count(s, c);
   start = 0;
   len = 0;
   init =0;

    if(!s || count == 0) {
        return NULL;
    }
    new_arr = (char **)malloc(sizeof(char *) * (count+1));

    count = 0;
    while(s[len] != '\0') {
        if(s[len] != c) {
            start = len;
            while(s[len] != '\0' && s[len] != c) {
                len++;
            }
            new_arr[count] = (char *)malloc(sizeof(char *)*(len-start+1));
            if(!new_arr[count]){
                while(init < count) {
                    free(new_arr[init]);
                    init++;
                }
                free(new_arr);
                return NULL;
            }
            new_arr[count] = ft_strncpy(s, start, len);
            count++;
        }
        else {
            len++;
        }
    }
    return new_arr;
}