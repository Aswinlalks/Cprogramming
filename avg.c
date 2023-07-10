#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, number, average;
    
    printf("Enter the total numbers: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        sum += number;
    }
    
    average = sum / n;
    
    printf("Average: %.2f\n", average);
    
    return 0;
}
