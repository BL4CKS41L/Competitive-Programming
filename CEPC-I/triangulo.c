#include <stdio.h>

#include <math.h>

int main() {

    float a, b, c;
    float raiz,s; //variaables auxiliares
    printf("Ingresa los numeros a, b , c: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    // calcular area
    s = (a + b + c) / 2;
    //printf("%.4f\n", s);

    raiz =sqrt( s * (s - a) * (s - b) * (s - c));
    
    //sqrtf(d);
    printf("%f\n",raiz);
    return 0;


}