// Your code here...
#include<stdio.h>
int main(){
int num,n,nth bit;
scanf("%d %d , num , n");
nth bit = (1<<n)| num;
ptintf("%d",nth bit);
return 0;
}