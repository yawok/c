#include <stdlib.h>
#include <stdio.h>

int main(){
    int magic, guessCount = 1;
    printf("Enter the magic number to end the game.\n");
    scanf("%d",&magic);
    while(magic != 72 && guessCount < 3){
        printf("Sorry. Try agian\n");
        scanf("%d", &magic);
        guessCount++;
    } 
    if (magic == 72 && guessCount <= 3){
        printf("\nJackpot! You just found the magic.\n");
    } else {
        printf("\nSorry, you fail\n");
    }

    return 0;
}