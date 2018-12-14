#include <stdio.h>
#include <math.h>


int main(){
    int a,b,c,x;
    scanf("%i%i%i",&a,&b,&c);
 /*  Este ejercicio consiste en determinar siun polinomio tiene solución o no.
 Primero se verifica si la raiz es mayor que cero, osea si es +(positiva) */
    
    if (sqrt(b*b-4*a*c)>=0) {
        x=-b + sqrt(pow(b,2)-4*a*c)/ (2*a);
        printf("YES");

    }
    else {
        printf("NO");
    }
    
    // printf("%i\n \n",x);
   // x= -b + sqrt(pow(b,2)-4*a*c)/ (2*a);
    //int z= -b - sqrt(b*b-4*a*c)/ (2*a);
    //x=sqrt(pow(b,2)-4*a*c);

   

    return 0;
}