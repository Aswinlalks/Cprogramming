#include <stdio.h>

int main() {
    int num, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
//code to find prime number
    if (num <= 1) {
        printf("The number is not prime.\n");
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("The number is prime.\n");
        } else {
            printf("The number is not prime.\n");
        }
    }

    return 0;
}
