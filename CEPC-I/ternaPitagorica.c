#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);
    
    if (pow(a,2)+pow(b,2)==pow(c,2)) {
        printf("SI\n");
    }
    else {
        printf("NO\n");
    }
    
return 0;
}