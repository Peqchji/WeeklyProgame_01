#include <stdio.h>
int main(){
    float num1, num2;
    scanf_s("%f %f", &num1, &num2);
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1+num2);
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1-num2);
    printf("%.2f x %.2f = %.2f\n", num1, num2, num1*num2);
    printf("%.2f / %.2f = %.2f", num1, num2, num1/num2);
    return 0;
}