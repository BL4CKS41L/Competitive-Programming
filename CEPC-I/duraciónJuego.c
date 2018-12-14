#include <stdio.h>
int main(){
int a,b;
scanf("%i%i",&a,&b);
if (a>=10 ) {
    printf("%i",a/2+b);
}
else if(b>=10) {
     printf("%i",a/2+b);
} else if(a<b){
printf("%i",b-a);
} else if (b<a) {
    printf("%i",a-b);
}


return 0;
}