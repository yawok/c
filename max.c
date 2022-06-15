#include <stdlib.h>
#include <stdio.h>

double max(double number1, double number2);

int main(){
    double number1, number2;

    printf("Enter two numbers: ");
    scanf("%lf\n%lf", &number1, &number2);

    printf("The max of the two numbers is: %f\n", max(number1, number2));
    
    return 0;
}

double max(double number1, double number2){
    if (number1 > number2){
        return number1;
    } else {
        return number2;
    }
}

