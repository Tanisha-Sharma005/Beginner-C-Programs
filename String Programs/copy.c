#include <stdio.h>
int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    gets(str1);
    int i = 0;
    while ((str2[i] = str1[i]) != '\0') {
        i++;
    }
    printf("Copied String = %s", str2);
    return 0;
}
