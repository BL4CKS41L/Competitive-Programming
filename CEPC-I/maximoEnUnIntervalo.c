#include <stdio.h>
int maximo(int array[],int a, int b){
int maximo1,maximo2;

if (a<b) {
    maximo1=maximo(array,a,(a+b)/2);
    maximo2=maximo(array,(a+b)/2+1,b);
    
    if (maximo1>maximo2) {
        return maximo1;
    } else{
        return maximo2;
    }
    
    } else{
    return array[a];
  }  
}// fin metodo
//inicia main
int main(){
int c,d,i;
int arra1[14]={2,3,5,6,8,6,8,234,54,5,6,32,65,99};
scanf("%d %d %d",&c,&d);

for( i = 0; i <14 ; i++) {
    printf("%d%d%d",maximo(arra1,c,d) );
}

}