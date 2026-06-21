#include <stdio.h>

int palindrome(int num) {
    int rev = 0, temp = num;

    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return (num == rev);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("%d is a Palindrome Number\n", num);
    else
        printf("%d is not a Palindrome Number\n", num);

    return 0;
}