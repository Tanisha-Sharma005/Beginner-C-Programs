#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    int len, i;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[i] = '\0';
    printf("Reversed string = %s", rev);
    return 0;
}
