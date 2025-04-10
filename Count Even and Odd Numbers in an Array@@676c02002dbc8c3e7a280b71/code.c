// Your code here...
#include <stdio.h>
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[n]%2=0){
        printf("%d",arr[i]);
    }
}
for(int i=0;i<n;i++){
    if(arr[n]%2!=0){
        printf("%d",arr[i]);
    }
}