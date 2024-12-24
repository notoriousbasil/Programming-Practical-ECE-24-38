#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // reversed integer is stored in reversedNum
    while (num != 0) {
        remainder = num % 10; // extracts last digit
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // palindrome if orignalNum and reversedNum are equal
    if (originalNum == reversedNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);

    return 0;
}
