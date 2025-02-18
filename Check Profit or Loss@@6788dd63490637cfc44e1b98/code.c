// Your code here...
#include <stdio.h>
int main(){
    int CP SP amt;
    scanf("%d %d",&CP,&SP);
    amt=SP-CP;
    if(amt>0){
        printf("Profit\n");
    }
    else if(amt<0){
        printf("Loss\n");
    }
    else{
        printf("No Profit No Loss\n");
    }


    return 0;
}