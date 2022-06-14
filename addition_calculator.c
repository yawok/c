#include <stdlib.h>
#include <stdio.h>

int main(){
    double first_number, second_number, total;

    printf("Enter the first number: ");
    scanf("%lf",&first_number);
    printf("Enter the second number: ");
    scanf("%lf",&second_number);

    printf("The total of %f + %f is %f\n", first_number, second_number, (first_number + second_number));
}