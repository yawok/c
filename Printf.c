#include <stdlib.h>
#include <stdio.h>

void Printf(char input[]);

int main(){
    char name[] = "Kenneth Obeng";
    Printf("I am Kenneth.");
    Printf(name);
    
}

void Printf(char input[]) {
    //custom printf statement
    printf("%s\n", input);
}