#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);

char *mx_strdup(const char *str) {
    char *dst = mx_strnew(mx_strlen(str));

    mx_strcpy(dst, str);
    return dst;
}
