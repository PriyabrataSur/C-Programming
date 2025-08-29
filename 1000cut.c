#include <stdio.h>

// Function to check divisibility
int isDivBy(int num, int div) {
    return (num % div == 0);
}

// Function to apply the 1000-cut rule
int apply1000CutRule(long long num) {
    while (num > 1000) {
        // Extract the last three digits
        int last3Dig = num % 1000;
        // Remove last three digits from the number
        num /= 1000;
        // Apply the difference
        num = num - last3Dig;
    }
    return num;
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    // Apply the 1000-cut rule
    int result = apply1000CutRule(num);

    // Check divisibility by 7, 11, and 13
    printf("Divisibility Check:\n");
    printf("By 7: %s\n", isDivBy(result, 7) ? "Yes" : "No");
    printf("By 11: %s\n", isDivBy(result, 11) ? "Yes" : "No");
    printf("By 13: %s\n", isDivBy(result, 13) ? "Yes" : "No");

    return 0;
}


