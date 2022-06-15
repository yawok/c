#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct Employee{
    char first_name[20];
    char last_name[20];
    char email[50];
    int department;
    double salary;
    char is_active;
};

void print(struct Employee emp1);

int main(){
    struct Employee emp1;
    char fname[20], lname[20], email[50], is_active;

    printf("Enter employee's first name: ");
    scanf("%s", fname);
    printf("Enter employee's last name: ");
    scanf("%s", lname);
    printf("Enter employee's email address: ");
    scanf("%s", email);

    strcpy(emp1.first_name, fname);
    strcpy(emp1.last_name, lname);
    strcpy(emp1.email, email);

    printf("Enter employee's department number: ");
    scanf("%d", &emp1.department);

    printf("Enter employee's salary: ");
    scanf("%lf", &emp1.salary);

    printf("Is employee active(T/F): ");
    scanf("\n%c", &emp1.is_active);
    
    print(emp1);

    return 0;

}

void print(struct Employee emp1){
    printf("\nEmployee details: \nFirst Name: %s\nLast Name :%s\nEmail: %s\nDepartment: %d\nSalary: %f\nIs Active: %c\n", emp1.first_name, emp1.last_name, emp1.email, emp1.department, emp1.salary, emp1.is_active);

}