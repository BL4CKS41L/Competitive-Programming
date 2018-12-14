#include <stdio.h>
int main(){
int a;
scanf("%i",&a);

if (a>1000) {
    //int b=a*0.15;
    printf("%i",a*85/100);
}
else {
 printf("%i",a);
}

}