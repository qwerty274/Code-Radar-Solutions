// Your code here...
#include <stdio.h>
int main(){
    char word;
    scanf("%c",&word);

    if (word=="a" || word=="e" ||word=="i" || word=="o"|| word=="u" || word =="A"|| word=="E"||word=="I"||word=="O" || word=="U"){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
else{
    printf("Special character");
}

    return 0;
}