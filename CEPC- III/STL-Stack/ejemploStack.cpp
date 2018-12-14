#include <iostream>
#include <stack>
using namespace std;

int main(){ //pepeman
stack<char> pila({'P','E','P','E'}); 
stack<char> aux({'E','P','E','P'});

pila.swap(aux);


while(!pila.empty()){
    cout<<pila.top();
    pila.pop();
}
cout<<"\n";
while(!aux.empty() ){
    cout<<aux.top();
    aux.pop();
}



return 0;
}