#include <stdlib.h>
#include <stdio.h>

double max(double number1, double number2, double number3);

int main(){
    double number1, number2, number3;
    printf("Enter 3 numbers:\n");
    scanf("%lf\n%lf\n%lf", &number1, &number2, &number3);

    printf("%f is the bigest of the 3 number\n", max(number1, number2, number3)); 

    return 0;
}

double max(double number1, double number2, double number3){
    if( (number1 >= number2) && (number2 >= number3)){
        return number1;
    } else if ((number2 >= number3) && (number3 <= number1)){
        return number2;
    } else{
        return number3;
    }
}