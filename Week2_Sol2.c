#include <stdio.h>
int main(){
    float num1, num2, results;
    scanf("%f %f", &num1, &num2);
    results = num1 + num2;
    printf("%.2f + %.2f = %.2f\n", num1, num2, results);
    results = num1 - num2;
    printf("%.2f - %.2f = %.2f\n", num1, num2,results);
    results = num1 * num2;
    printf("%.2f x %.2f = %.2f\n", num1, num2,results);
    results = num1 / num2;
    printf("%.2f / %.2f = %.2f\n", num1, num2,results);
}