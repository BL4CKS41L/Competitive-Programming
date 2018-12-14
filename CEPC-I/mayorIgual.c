#include <stdio.h>
int main( ){
    int a,b;
  // printf("INgresa N : ");
    scanf("%i",&a);
    scanf("%i",&b);
    if (a==b) {
        printf("iguales");
    }
    else if(a>b) {
        printf("mayor");
    }
    else {
        printf("menor");
    } 
    
}
