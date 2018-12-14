#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    stack <int> pilita;
    stack <int> aux1;
    int n,value=0,i; //N CASOS DE PRUEBA

    cin>>n;
    for( i = 0; i < n; i++)   {
        cin>>value;
        if(pilita.size() < value){ 
               pilita.push(value); 
               
        }  if(pilita.size() > value) {
                pilita.pop();

        }
    } // fin tst case
    pilita.swap(aux1);
    cout<<"Size of stack: "<<aux1.size();
    int aux = aux1.size();
    while(!aux1.empty()){ 
        cout<<aux1.top()<<" ";
        pilita.pop();
        }

    return 0;
}
/// test case 7
// 2 7 1 8 2 8 2