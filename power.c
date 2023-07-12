#include <stdio.h>

int main() {
    int base, exponent;
    int result = 1;
    
    printf("Enter base number: ");
    scanf("%d", &base);
    
    printf("Enter exponent number: ");
    scanf("%d", &exponent);
    
    while (exponent != 0) {
        result *= base;
        --exponent;
    }
    
    printf("Result: %d \n", result);
    
    return 0;
}
