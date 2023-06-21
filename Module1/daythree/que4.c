#include <stdio.h>

int deleteDigit(int num, int position) {
    int pow = 1;
    int temp = num;

    while (temp / 10 != 0) {
        pow *= 10;
        temp /= 10;
    }

    return (num / (pow * 10)) * pow + (num % pow);
}

int findLargestNumber(int num) {
    int largest = 0;

    for (int i = 0; i < 4; i++) {
        int deletedNum = deleteDigit(num, i);
        if (deletedNum > largest) {
            largest = deletedNum;
        }
    }

    return largest;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumber(number);

    printf("The largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}