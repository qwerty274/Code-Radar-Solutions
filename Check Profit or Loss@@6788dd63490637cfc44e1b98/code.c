// Your code here...
#include <stdio.h>
int maint(){
    int CP ,SP;
    scanf("%d %d",&CP,&SP);
    amt=("%d",SP-CP);
    if(amt>0){
        printf("Profit");
    }
    else{
        printf("Loss");
    }


    return 0;
}