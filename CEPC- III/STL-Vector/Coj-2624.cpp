#include <bits/stdc++.h>
using namespace std;
int main(){
    //T==casos de prueba, M==dias, N== ciudades D==dias P/ciudad
    int T,M,N,aux=0;
    int i;
    vector <int> d;

    cin >> T;
    for( i = 0; i < T; i++) {
        cin>>M>>N;
        
        for( i = 0; i < N; i++) {
         cin>>aux;
        d.push_back(aux);     
        }
          sort(d.begin(), d.end());  
        aux=0;
   for(i = 0; i < N; i++) {
            if(M>=d[i]){
                 M= M - d[i];
                aux++;
            } 
            else { 
                break;
            }   
        } 
        cout<<aux;

        d.clear();
        aux=0;
    } //fin casos de prueba
    

    return 0;
}