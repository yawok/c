#include <stdlib.h>
#include <stdio.h>

void add(double number1, double number2);
void subtract(double number1, double number2);
void multiply(double number1, double number2);
void divide(double number1, double number2);

int main(){
    float first_number, second_number, output;
    char operator;

    printf("This is a calculation\nEnter the first number:i ");
    scanf("%f",&first_number);

    printf("Enter the second number: ");
    scanf("%f",&second_number);

    printf("Enter the operator(ie a=add, s=sub, d=div, m=mul): ");
    scanf("\n%c",&operator);

    /* if statements */
    if (operator == 'a'){
        add(first_number, second_number);
    } else if (operator == 's'){
        subtract(first_number, second_number);
    } else if (operator == 'd'){
        divide(first_number, second_number);
    } else if (operator == 'm'){
        multiply(first_number, second_number);
    } else {
        printf("operator does not exist\n");
    }

   return 0;

}

void add(double number1, double number2){
    printf("%lf\n", number1 + number2);
}

void subtract(double number1, double number2){
    printf("%lf\n", number1 - number2);
}

void multiply(double number1, double number2){  
    printf("%lf\n", number1 * number2);
}

void divide(double number1, double number2){  
    printf("%lf\n", number1 / number2);
}