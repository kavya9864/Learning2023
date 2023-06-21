#include <stdio.h>

void findMinMaxDigits(int n, int numbers[]) {
    int i, j;
    int smallestDigit = 9;
    int largestDigit = 0;

    for (i = 0; i < n; i++) {
        int num = numbers[i];

        while (num != 0) {
            int digit = num % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            num /= 10;
        }
    }

    if (smallestDigit == 9 || largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int numbers[n];

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findMinMaxDigits(n, numbers);

    return 0;
}