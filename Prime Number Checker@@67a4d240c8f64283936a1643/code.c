#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;  // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Found a divisor, not prime
    }
    return 1; // Prime number
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
