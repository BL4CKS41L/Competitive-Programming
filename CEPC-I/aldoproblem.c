#include <stdio.h>

int main() { 
int tiempo_total, cantidad_rolas,minutos_cancion,total=0;
scanf("%d",&tiempo_total);
scanf ("%d",&cantidad_rolas);

for(int i = 0; i <  cantidad_rolas; i++) {
   scanf("%d",&minutos_cancion);
    total+=minutos_cancion;
}


if (total>tiempo_total) {
    printf("No es posible\n");
}
else if(total<tiempo_total) {
    printf("Es posible\n");
}
else if(total== tiempo_total) {
  printf("Es exacto");
}

return  0;
}