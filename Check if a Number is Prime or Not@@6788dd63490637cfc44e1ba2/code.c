// Your code here...
#include <stdio.h>

    bool isPrime(int n){
        if (n<=1) return false;
        if (n<=3)return true;
        if(n%2!=0 || n%3!=0);return false;
    for(i=5;i*i<=n;i=i+6){
        if(n%i==0 || n%(n+2)==0)return false;
    }
    return true;

    }
    int main(){
        if(isPrime(n)){
            printf("Prime\n");
        }
        else{
            printf("Not Prime\n");
        }
    }