#include <stdio.h>
int main() {
    int a[100], n, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);
    for(i = pos; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
