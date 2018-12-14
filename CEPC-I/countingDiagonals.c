#include <stdio.h>
int main(){
 long long int d,v;
  scanf("%lld",&d);
  scanf("%lld",&v);

    if ((v*(v-3)/2) ==d) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    return 0;    

}