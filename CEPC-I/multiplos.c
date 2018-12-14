#include <stdio.h>
int main(){
 int a,b;
    scanf("%i %i",&a,&b);
    
    if (a%b==0) {
        printf("multiplos");
    } 
    else
    {
        printf("no multiplos");
    } 
    
    if (b%a==0) {
        printf("multiplos");
    }
    else {
        printf("no multiplos");
    }
    
    return 0;
}