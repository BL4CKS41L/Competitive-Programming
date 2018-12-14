#include <iostream>
#include <string>
#include  <stack>
using namespace std;

int main(){
    string line;
    stack <char> pila;
    getline(cin,line);
    int lenght = line.length();

    // recorrer el string y mandar ala verga los parentesis
    
    for(int i = 0; i < lenght; i++) {
        if (line[i] == '(' ) {
            pila.push(i);
        } 
        if (line[i]== ')' ) {
            pila.push(i);
        }
         
    }
         






    return 0;
}