#include <stdio.h>

int main() {
    int num, factorial = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        
        printf("Factorial: %d\n", factorial);
    }
    
    return 0;
}
