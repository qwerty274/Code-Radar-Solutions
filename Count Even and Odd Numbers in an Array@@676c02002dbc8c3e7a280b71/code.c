// Your code here...
#include <stdio.h>
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
count_even=0;
count_odd=0;
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        printf("%d",count_even);
    }
}
for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
        printf("%d",count_odd);
    }
}