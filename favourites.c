#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char favourites[5][15], temp[15];
    printf("Enter your 5 favourite languages: \n");
    for (int i=0; i<5; i++){
        scanf("%s", temp);
        strcpy(favourites[i], temp);
    }

    for (int i = 0; i < 5; i++){
        printf("Your favourite languages are: %s\n", favourites[i] );
    }
}
