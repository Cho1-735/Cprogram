#include<stdio.h>
int main(){
    float a =17.0;
    int b = 5;
    float sum = a+b;
    float diff = a-b;
    float product = a*b;
    float quotient = a/b;
    int remainder = (int)a%b;
    printf("和: %.2f\n",sum);
    printf("差: %.2f\n",diff);
    printf("积: %.2f\n",product);
    printf("商: %.2f\n",quotient);
    printf("余: %d\n",remainder);
    return 0;  
}