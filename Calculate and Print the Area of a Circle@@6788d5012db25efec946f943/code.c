// Your code here...
#include <stdio.h>
int main(){
    double rad;
    double area;
    scanf("%lf",&rad);
    area= 3.14 * (rad * rad);
    printf("Area: %.5lf\n",area);
    return 0;
}