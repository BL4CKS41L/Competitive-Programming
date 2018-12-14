#include <stdio.h>
int main(){
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

/* Se verifica  que los angulos no sean < o >   a 180  */
 if (a+b+c !=180){
     printf("Error\n");

 } else if(a ==b && b==c &&c==a) {
    printf("Equilateral\n");
}
else if(a==b && b!=c || b==c && c!=a ) {
    printf("Isosceles\n");
}
else if(a!=b && c!=a) {
    printf("Scalene\n");
} 


return 0;

}