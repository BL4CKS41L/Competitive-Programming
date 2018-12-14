#include <stdio.h>
int v[51][51];

int pascal(int i, int j){

if (j==1 || i==j ) {
    return 1;
}
else if( v[i][j] != 0) {
return v[i][j];
}
else {
    v[i][j]=pascal(i-1, j-1)  + pascal(i-1, j);
    return v[i][j];
}

}

int main(){

int n=1,m=1,i;

for( i = 1; i <= 51; i++) {
printf("%d %d",pascal(n,m));
}




    return 0;
}