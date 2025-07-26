#include <stdio.h>

int main() {
    int a ,b;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    if (a > b)
        printf("Max = %d\n", a);
    else
        printf("Max = %d\n", b);
    return 0;
}
