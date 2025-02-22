// Your code here...
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int bits = sizeof(num) * 8;  // Get total number of bits (usually 32 for int)
    int msb = (num >> (bits - 1)) & 1;  // Extract MSB

    if (msb == 1)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
