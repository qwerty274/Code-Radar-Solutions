// Your code here...
#include <stdio.h>
int main(){
    char value;
    scanf("%c",&value);
    if(value>='A' && value <='Z'){
        printf("Uppercase");
    else if(value>='a' && value <='z'){
        printf("Lowercase");
    }

    }

    return 0;
}