#include <stdio.h>
int main(){
    int a = 17;
    int b = 5;
    int sum = a+b;
    int diff = a-b;
    int product = a*b;
    int quotient = a/b;
    int remainder = a%b;
    printf("和: %d\n",sum);
    printf("差：%d\n",diff);
    printf("积:%d\n",product);
    printf("商:%d\n",quotient);
    printf("余数:%d\n",remainder);
    return 0;       
}