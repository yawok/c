#include <stdlib.h>
#include <stdio.h>

int main(){
    char letter = 'a';
    int age;
    double cwa;
    
    //pointers
    char * pLetter = &letter;
    int * pAge = &age;
    double * pCwa = &cwa;

    printf("The address for letter is %p\n", pLetter);
    
    //dereferencing a pointer 
    //*&letter also works in place of *pLetter
    printf("The dereference for letter is %c\n", *pLetter);


}