#include <stdio.h>

int main() {
    int num = 121, original = num, reverse = 0;

    while (num != 0) {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }

    if (original == reverse)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}
