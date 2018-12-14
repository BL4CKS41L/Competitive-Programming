#include <iostream>
#include <stack>
using namespace std;
// pendiente error de ejecución.
int main(){
    stack <int> pila1;
    stack <int> pila2;
    int T,P=0,S=0,N=0,aux=0;
    cin>>T;
    // testcases 
    for(int i = 0; i < T; i++) {
        cin>>P>>S>>N;
        
        if (P==1) {
           if(S==1){
               pila1.push(N);
           } else{
               pila2.push(N);
           }
        }
        else if(P==2) {  //P==2 Instrucción de mover Elementos
        if (S==1) { //mover de la pila1 ala pila2
            if (N >= pila1.size() ) {
                for(int i = 0; i < pila1.size() ; i++){
                  aux=pila1.top();
                  pila2.push(aux);
                  pila1.pop();
                } //mover todo elementos de la pila
                
            } // fin if si no se cumple la condición elimino hasta N
            for(int i = 0; i < N; i++){
             aux=pila1.top();
             pila2.push(aux);
             pila1.pop();
           }
            
           

        } // condicional de la pila2
          else  {      
            
            if (N>= pila2.size() ) {
                for( i = 0; i < pila2.size(); i++){
                 aux=pila2.top();
                 pila1.push(aux);
                 pila2.pop();
                }
                
            }

             for(int i = 0; i < N; i++) {
               aux=pila2.top();
                pila1.push(aux);
                pila2.pop();
          } 
          
        }
        
        } 
    } // fin for
  
        while(!pila1.empty() ){
            cout<<pila1.top()<<" ";
            pila1.pop();
        }
        cout<<"\n";
        while(!pila2.empty() ){
            cout<<pila2.top()<<" ";
            pila2.pop();
        } //cout<<"\n"; 

    return 0;
}