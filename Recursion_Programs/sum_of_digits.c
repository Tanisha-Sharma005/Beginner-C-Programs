#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int number = 1234;
    printf("Sum of digits of %d = %d\n", number, sumDigits(number));
    return 0;
}
