#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *start = arr;
    int *end = arr + 4;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
