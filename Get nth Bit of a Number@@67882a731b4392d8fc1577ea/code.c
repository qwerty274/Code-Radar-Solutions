// Your code here...
#include<stdio.h>
int main(){
int num,n,nthbit;
scanf("%d %d , num , n");
nthbit = (1<<n)| num;
printf("%d ",nthbit);
return 0;
}