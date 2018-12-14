#include <stdio.h>

int factorial(int m){
  int fmin;
  printf("%d",m);
if (m==0) {
   return 1;
}
else {
  fmin=factorial(m-1);
  printf("%d\n%d",m,fmin);
  return fmin*m;
}
//otra forma de hacerlo   
/* 
else{
  return factorial(m-1)*m;
}

 */


}
int main(){
int n;
scanf("%d",&n);
//factorial(n);

printf("\nResultado! == %d",factorial(n));


    return 0;
}