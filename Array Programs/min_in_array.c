#include <stdio.h>
int main() {
    int a[100], n, i, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = a[0];
    for(i = 1; i < n; i++)
        if(a[i] < min)
            min = a[i];
    printf("Minimum element = %d", min);
    return 0;
}
