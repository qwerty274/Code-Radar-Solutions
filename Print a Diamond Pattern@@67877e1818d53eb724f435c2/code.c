// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
for(i=1;i=n-i;i++){
    for(j=1;j=n-i;j++){
        printf(" ");
    }
}
for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}