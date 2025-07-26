#include <stdio.h>
int main() {
    int a[100], n, i, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = a[0];
    for(i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];
    printf("Maximum element = %d", max);
    return 0;
}
