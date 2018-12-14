#include <bits/stdc++.h>
using namespace std;
int main(){
   
int n,k,i,max_sum=0,aux=0;
vector <int> cajas;  
 cin>>n>>k;
    for( i = 0; i < n; i++) {
        
        cin>>aux;
        cajas.push_back(aux);
    }

for( i = 0; i < k; i++) {  //suma todos los elementos del array 
max_sum += cajas[i];
}

int window_sum = max_sum; //asigna el valor de la suma del vector

for( i =k; i <n ; i++) {
window_sum +=cajas[i] - cajas[i-k];
max_sum = max(max_sum,window_sum);
}

cout<<max_sum;
cajas.clear();
aux=0;
    return 0;
}