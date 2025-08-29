#include <stdio.h>

int main() {
    int number = 345335;
    
    // Print digits of the number
    while (number > 0) {
        int digit = number % 10;
        number /= 10;
        if (number != 0) {
            printf("%d, ", digit);
        } else {
            printf("%d", digit);
        }
    }
    
    return 0;
}

