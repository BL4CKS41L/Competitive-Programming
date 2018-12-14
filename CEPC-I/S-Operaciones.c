#include <stdio.h>
/*  Descripción
Dados dos números enteros a, b. Escribe un programa que calcule el resultado de hacer las siguientes operaciones con ellos.
Sumarlos
Restarlos
División entera
Multiplicación
Módulo
Entrada
Una línea con dos enteros separados por un espacio.
Salida
Una línea con los enteros resultantes de cada operación en el orden especificado y separados por un espacio.
*/
int main(){
int a,b;
//printf("Ingresa los numeros a y b: ");
scanf("%i%i",&a,&b);

//printf("%i %i",a ,"  ", b);
printf("%i ",a+b);
printf("%i ",a-b);
printf("%i ",a/b);
printf("%i ",a*b);
printf("%i ",a%b);


}