#include <stdio.h>
int main(){
    int i,j,N,suma;
    int array[N][2];
    int result[N];
    printf("Ingresa #Filas: ");
    scanf("%d",&N);
//llenado de la matriz
for(i = 0; i < N; i++) {
for(int j=0;j<2;j++){
   printf("Ingresa elementos array[%d][%d]: ",i+1,j+1);
scanf("%d",&array[i][j]);
    }
   
}
//impresion de la matriz de 2*N  filas
for( i = 0; i < N; i++) { 
  for(j = 0; j < 2; j++) {
      printf("%d",array[i][j]);
  }
  printf("\n");
}

 // printf("%i",suma[i]+sum[j]);
printf("Matriz Suma\n");
//suma de columnas
for(i= 0; i < N; i++) {
   suma=0;
    for( j = 0; j < 2; j++) {
       suma+=array[i][j];
   }
    result[i]=suma;
}
    //muestrael vector resltante de la suma de las columnas
    
    for( i = 0; i < N; i++){
        printf("%d\n",result[i]);
    }
    

    return 0;
}