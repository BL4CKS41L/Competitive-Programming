#include <stdio.h>
int v[100];

int fibonacci(int n){
    
    if (v[n]!=0) {
    return v[n];
    } else if (n==0) {
        return 0;
    }
    else if(n==1) {
        return 1;
    } 
    else {
        v[n]=fibonacci(n-1) + fibonacci (n-2);
        return v[n];
    }
    
}

int main(){
int i;
for( i = 0; i < 100; i++) {
 printf("%d\n",fibonacci(i) );
}


}
