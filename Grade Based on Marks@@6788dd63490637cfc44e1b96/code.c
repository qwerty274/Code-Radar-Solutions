 // Your code here...
#include <stdio.h>
int main(){
int mks;
scanf("%d",&mks);
if(mks>=90){
    printf("A");
}
else if(mks>=80 && mks<90){
    printf("B");
}
else if(mks>=70 && mks<80){
    printf("C");
}
else if(mks>=60 && mks<70){
    printf("D");
}
else{
    printf("F");
}

return 0;
}
