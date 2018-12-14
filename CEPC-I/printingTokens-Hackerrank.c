#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;  // referencia s 
    char *strin; // PUNTERO 
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
  strin  = strtok(s," ");  
 while(strin != NULL){ 
    printf("%s\n",strin); 
        strin = strtok(NULL," ");
 }
    
    
    
    return 0;
}