#include <stdio.h>
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    int i = 0, j = 0;
    while (str1[i] != '\0') i++;
    while ((str1[i++] = str2[j++]) != '\0');
    
    printf("Concatenated string = %s", str1);
    return 0;
}
