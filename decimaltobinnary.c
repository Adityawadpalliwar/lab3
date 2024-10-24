#include <stdio.h>

int main() {
    int n, bin = 0, rem, p = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 2;     
        n = n / 2;       
        bin = bin + rem * p; 
        p = p * 10;     
    }
    printf("Binary: %d\n", bin);

    return 0;
}
