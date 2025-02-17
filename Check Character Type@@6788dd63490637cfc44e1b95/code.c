// Your code here...
#include <stdio.h>
int main(){
    char word;
    scanf("%c",&word);
    if(word>="0" && word<="9"){
        printf("Digit\n")
    }

    if (word=="a" || word=="e" ||word=="i" || word=="o"|| word=="u" || word =="A"|| word=="E"||word=="I"||word=="O" || word=="U"){
        printf("Vowel\n");
    }else{
        printf("Consonant\n");
    }
else{
    printf("Special character\n");
}

    return 0;
}