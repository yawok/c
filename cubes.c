#include <stdlib.h>
#include <stdio.h>

double cube(double number);
double cube_root(double number);

int main(){
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    
    printf("The cube of %f is %f\n", number, cube(number));
    printf("The cube root of %f is %f\n", number, cube_root(number));
    return 0;
}

double cube(double number) {
    return (number * number * number);
}

double cube_root(double number){
    return (number / number / number);
}