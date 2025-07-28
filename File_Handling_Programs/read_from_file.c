#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "r");
    char ch;

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
