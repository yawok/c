#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Employee {
    char name[30];
    int age;
    double salary;
};

int main() {
    int number = 3;
    char letter = 'a';
    double salary = 0.7;

    struct Employee emp1;
    strcpy(emp1.name, "Kenneth Yaw Obeng");
    emp1.age = 20;
    emp1.salary = 270000;

    printf("\nThe memory addresses\nnumber: %p\nletter: %p\nsalary: %p\nemp1: %p\n", &number, &letter, &salary, &emp1);

    return 0;
}