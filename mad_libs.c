#include <stdlib.h>
#include <stdio.h>

int main(){
    char colour[20];
    char noun[20];
    char celebrity_fname[20];
    char celebrity_lname[20];

    printf("Enter any colour: ");
    scanf("%s", colour);
    printf("Enter any plural noun: ");
    scanf("%s", noun);
    printf("Enter a celebrity's first and last name: ");
    scanf("%s%s", celebrity_fname, celebrity_lname);

    printf("\n\n");

    printf("Roses are %s\n", colour);
    printf("%s are blue\n", noun);
    printf("I love %s %s\n", celebrity_fname, celebrity_lname);

    return 0;
    
}