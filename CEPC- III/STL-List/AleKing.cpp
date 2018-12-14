#include <bits/stdc++.h>

using namespace std;

int main(){

        list<int> lista;
    int n=0,aux,m;
    
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>aux;
        lista.push_back(aux);
    }
   
    cin>>m;

 if (m==1) { // funciona como pila
    
    while(!lista.empty() ) {  
        cout<<lista.back()<<" ";
        lista.pop_back();
    }
    
    
   } else if(m==2){ // funciona como cola

    while(!lista.empty() ) {   
    cout<<lista.front()<<" ";
    lista.pop_front();
    }
   
   } else 

    lista.sort();
    while(!lista.empty() ) {  
        cout<<lista.back()<<" ";
        lista.pop_back();
    }
    
    return 0;
}