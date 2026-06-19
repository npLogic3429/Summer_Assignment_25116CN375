#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, count = 0;
    int sum = 0;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong Number.\n", original);
    else
        printf("%d is not an Armstrong Number.\n", original);

    return 0;
}