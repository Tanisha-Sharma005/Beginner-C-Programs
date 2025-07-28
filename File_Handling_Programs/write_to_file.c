#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("File could not be created.\n");
        return 1;
    }
    fprintf(fp, "Hello, this is a test file.\nWelcome to C programming!");
    fclose(fp);
    printf("Data written to file successfully.\n");
    return 0;
}
