// Your code here...
#include <stdio.h>
int main(){
    int n;
    char i;
    char j;
    scanf("%d",&n);
    scanf("%c",&i);
    for(char i ;i<=n;i++){
        for(char j;j<=i+1;j++){
            printf("%c",j);
        }
    }
    scanf("%c",&i);

    return 0;
}