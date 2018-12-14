#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(){
    int Tes=0;
    string line;
//lectura de String
    cin>>Tes;
while(Tes--) { 
    stack<char> s;
    cin>>line;
    if (line.length() % 2 !=0) {
        cout<<"NO\n";
      
    }
    for(int i = 0; i < line.length(); i++) {
        if(line[i]== '(' || line[i] == '[' )
        s.push(i);
        if(line[i]== ')' || line[i]== ']' ) {  
            if(!s.empty() )
            s.pop();
        } else 
        s.push(i);

    }//fin del for
    
     if (s.empty() ) {
            cout << "Yes\n" << endl;
        }
       
    } //fin del while



    return 0;
}
/* 3
([])
(([()])))
([()[]()])() */