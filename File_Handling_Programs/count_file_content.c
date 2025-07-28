#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "r");
    char ch;
    int lines = 0, words = 0, chars = 0;

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ' || ch == '\t') words++;
        if (ch == '\n') {
            lines++;
            words++;
        }
    }

    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
