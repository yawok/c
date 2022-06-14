#include <stdlib.h>
#include <stdio.h>

int main(){
    int age;
    char name[25];
    char password[32];

    printf("Enter your name: ");
    fgets(name, 25, stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("So You are %s and %d years old.\n", name, age);

    printf("Enter your password(max 32 characters, no spaces): ");
    scanf("%s", password);

    printf("Your password is %s\n", password);




    return 0;
}