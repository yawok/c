#include <stdlib.h>
#include <stdio.h>

void save(char name[], int age, char program[], double cwa);
void load();

int main(){
    char name[25];
    int age;
    char program[25];
    double cwa;
    char line[255];


    printf("Enter your first name: ");
    scanf("%[^\n]s", name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your cwa: ");
    scanf("%lf",&cwa);
    printf("Enter your program: ");
    //accept multiple words into string variable
    scanf("\n%[^\n]s",program);

    save(name, age, program, cwa);
    load();

    return 0;

}


void save(char name[], int age, char program[], double cwa){
    char filename[] = "user_bio.txt";
    char line[255];
    
    FILE *fpointer = fopen(filename,"a");
    fprintf(fpointer, "\n(%s, %d, %s, %f)",name, age, program, cwa);

    fclose(fpointer);
}

void load(){
    char filename[] = "user_bio.txt";
    char line[255];
    
    FILE *fpointer = fopen(filename,"r");
    int c = getc(fpointer);
    while(c != EOF){
        fgets(line, 255, fpointer);
        printf("%s",line );
        c = getc(fpointer);
    }

    fclose(fpointer);
}