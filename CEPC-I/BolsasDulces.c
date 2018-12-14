
#include <stdio.h>
int main() {

int N,a,b,aux=0,temp=0;
scanf ("%d",&N);

for(int i = 0; i < N; i++) {
    scanf("%d %d",&a,&b);
    temp+=a*b;

}
printf("%d",temp);



} //fin mainc