// Your code here...
#include <stdio.h>
#include <ctype.h>
int main(){
    char word;
    scanf("%c",&word);
    if(isdigit(word)){
        printf("Digit\n");
    }

    else if (word=='a' || word=='e' ||word== 'i' || word=='o'|| word=='u'|| word =='A'|| word=='E'||word=='I'||word=='O' || word=='U'){
        printf("Vowel\n");
    }
    else if(isalpha(word)){
        printf("Consonant\n");
    }
    else {
        printf("Special Character\n");
    }

    return 0;
}